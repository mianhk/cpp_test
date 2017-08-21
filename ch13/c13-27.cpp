#include <iostream>
#include <string>
using namespace std;

class HasPtr{
	public:
		HasPtr(const string &s):ps(new string(s)),i(0),use(new size_t(1)){
		}
		HasPtr(const HasPtr &p):
			ps(new string(*p.ps)),i(p.i),use(p.use){++use;
			}         //拷贝构造函数 
		HasPtr& operator=(const HasPtr&); //拷贝赋值运算符
		HasPtr& operator=(const string&);//赋予一个新的string
		string& operator*(); //解引用
		~HasPtr();//析构函数 
		
	private:
		string *ps;
		int i;
		size_t *use;
};

HasPtr::~HasPtr(){
	if(--*use==0){
		delete ps;    //释放string的内存 
		delete use;
	}
}

HasPtr& HasPtr::operator=(const string &h){
	*ps=h;
	return *this;
}

inline
HasPtr& HasPtr::operator=(const HasPtr &rhs){
	++*rhs.use;
	if(--*use==0){
		delete ps;
		delete use;
	}
	ps=rhs.ps;
	i=rhs.i;
	use=rhs.use;
	return *this;
}

string& HasPtr::operator*(){
	return *ps;
} 

int main(){
	HasPtr h("hi,mon");
//	HasPtr h1(h);
	HasPtr h2=h;
	h="hi,dad";
//	h1="hi,dad";
//	h2="hi,son";
	cout<<"h:"<<*h<<endl;
//	cout<<"h1: "<<*h1<<endl;
	cout<<"h2: "<<*h2<<endl;
	return 0;
}
