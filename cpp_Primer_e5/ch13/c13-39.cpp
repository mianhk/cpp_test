#include <iostream>
#include <string>
#include <utility>
using namespace std;

//设计strVec类
class StrVec{
	public:
		StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){
		}
		StrVec(initialized_list<string> il);
		StrVec(const StrVec&);
		StrVec& operator=(const StrVec&);
		~StrVec();
		
		void push_back(const  std::string&);
		size_t size(){
			return first_free-elements;
		}
		size_t capacity(){
			return cap-elements;
		}
		void reserve(size_t n);
		void resize(size_t n);
		void resize(size_t n,const std::string &s);
		std::string *begin() const {return elements;}
		std::string *end() const {return first_free;}
			
	private:
		static std::allocator<std::string> alloc;  //分配元素
		void chk_n_alloc(){
			if(size()==capacity())
				reallocate();
		} 
		std::pair<std::string*,std::string*> alloc_n_copy(const std::string*,const std::string*);
		void free();
		void reallocate();
		std::string *elements;//指向数组首元素的指针
		std::string *first_free;//指向数组第一个空闲元素的指针
		std::string *cap; //指向数组尾后位置的指针 
		
}; 

StrVec::StrVec(initialized_list<string> il){
	auto newdata=alloc_n_copy(il.begin(),il.end());
	elements=newdata.first;
	first_free=cap=newdata.second;
}

void StrVec::push_back(const  std::string &s){
	chk_n_alloc(); //确保有空间容纳新元素
	alloc.construct(first_free++,s); 
}

std::pair<std::string*,std::string*> 
StrVec::alloc_n_copy(const std::string *b,const std::string *e){
	//分配空间保存给定范围内的元素
	auto data=alloc.allocate(e-b);
	//初始化并返回一个pair，该pair由data和uninitialized_copy的返回值构成
	return {data,uninitialized_copy(b,e,data)}; 
}

void StrVec::free(){
	//不能传递给dealocator一个空指针
	if(elements){
		for(auto p=first_free;p!=elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements,cap-elements);
	} 
}

StrVec::StrVec(const StrVec &s){
	auto newdata=alloc_n_copy(s.begin(),s.end());
	elements=newdata.first;
	first_free=cap=newdata.second;
}

StrVec::~StrVec(){
	free();
}

StrVec& StrVec::operator=(const StrVec &rhs){
	auto data=alloc_n_copy(rhs.begin(),rhs.end());
	free();
	elements=data.first;
	first_free=cap=data.second;
	return *this;
}

void StrVec::reallocate(){
	auto newcapacity=size()?2*size():1;
	auto newdata=alloc.allocate(newcapacity);
	auto dest=newdata;//指向新数组中下一个空闲位置 
	auto elem=elements;//指向旧数组中下一个元素
	for(size_t i=0;i!=size();++i){
		alloc.construct(dest++,std::move(*elem++));
	} 
	free();   //移动完元素后释放旧的内存空间
	elements=newdata;
	first_free=dest;
	cap=elements+newcapacity; 
}

void reserve(size_t n){
	if(n>capacity())
		reallocate(n);
}

void resize(size_t n){
	if(n>size()){
		while(size()<n)
			push_back("");
	}
	else if(n<size()){
		while(size()>n){
			alloc.destroy(--first_free);
		}
	}
}
void resize(size_t n,const std::string &s){
	if(n>size()){
		while(n>size()){
			push_back(s);
		}
	}
	else if(n<size()){
		while(n<size()){
			alloc.destroy(--first_free);
		}
	}
}
int main(){
	return 0;
}
