#include <iostream>
#include <string>
using namespace std;

class HasPtr{
	public:
		HasPtr(const string &s):ps(new string(s)),i(0),use(new size_t(1)){
		}
		HasPtr(const HasPtr &p):
			ps(new string(*p.ps)),i(p.i),use(p.use){++use;
			}         //�������캯�� 
		HasPtr& operator=(const HasPtr&); //������ֵ�����
		HasPtr& operator=(const string&);//����һ���µ�string
		string& operator*(); //������
		~HasPtr();//�������� 
		
	private:
		string *ps;
		int i;
		size_t *use;
};

HasPtr::~HasPtr(){
	if(--*use==0){
		delete ps;    //�ͷ�string���ڴ� 
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
