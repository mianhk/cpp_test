#include <iostream>
#include <memory>
#include <algorithm>
using namespace std;

class String{
	public:
		String()=default;
		String(const char *);
		String(const String&);
		String& operator=(const String&);
		~String();
		
		const char *c_char() const{ return elements;}
		size_t size() const {return end-elements;}
		size_t length() const {return end-elements-1;}
	private:
		char *elements;
		char *end;
		std::allocator<char> alloc;
		std::pair<char*,char*> alloc_n_copy(const char*,const char*);
		void range_initializer(const char*,const char*);
		void free();
};


String::String(const String &rhs){
	range_initializer(rhs.elements,rhs.end);
	std::cout<<"拷贝构造函数"<<std::endl;
}

String& String::operator=(const String &rhs){
	auto newstr=alloc_n_copy(rhs.elements,rhs.end);
	free();
	elements=newstr.first;
	end=newstr.second;
	std::cout<<"拷贝赋值运算符"<<std::endl;
	return *this;
}
String::String(const char *c){
	char *sl=const_cast<char*>(c);
	while(*sl){
		++sl;
	}
	range_initializer(c,++sl);
	std::cout<<"构造函数"<<std::endl;
}

String::~String(){
	free();
}

void String::free(){
	if(elements){
		std::for_each(elements, end, [this](char &c){ alloc.destroy(&c); });
        alloc.deallocate(elements, end - elements);
//		std::for_each(elements,end,[this](char *c){alloc.destroy(&c);});
//		alloc.deallocate(elements,end-elements);
	}
}

std::pair<char *,char *> String::alloc_n_copy(const char *b,const char *e){
	auto str=alloc.allocate(e-b);
	return {str,std::uninitialized_copy(b,e,str)};
}

void String::range_initializer(const char *first,const char *last){
	auto newstr=alloc_n_copy(first,last);
	elements=newstr.first;
	end=newstr.second;
}
