#include <iostream>
#include <string>
using namespace std;

class HasPtr{
	public:
		HasPtr(const string &s):ps(new string(s)),i(0){
		}
		HasPtr(const HasPtr &p):
			ps(new string(*p.ps)),i(p.i){
			}         //�������캯�� 
		HasPtr& operator=(const HasPtr&); //������ֵ�����
		HasPtr& operator=(const string&);//����һ���µ�string
		string& operator*(); //������
		~HasPtr();//�������� 
		
	private:
		string *ps;
		int i;
};

HasPtr::~HasPtr(){
	delete ps;    //�ͷ�string���ڴ� 
}

HasPtr& HasPtr::operator=(const string &h){
	*ps=h;
	return *this;
}

inline
HasPtr& HasPtr::operator=(const HasPtr &rhs){
	auto newps=new string(*rhs.ps);
	delete ps;
	ps=newps;
	i=rhs.i;
	return *this;
}

string& HasPtr::operator*(){
	return *ps;
} 

int main(){
	HasPtr h("haha");
	HasPtr h1(h);
	HasPtr h2=h;
	h1="hi,dad";
	h2="hi,son";
	cout<<"h:"<<*h<<endl;
	cout<<"h1: "<<*h1<<endl;
	cout<<"h2: "<<*h2<<endl;
	return 0;
}
