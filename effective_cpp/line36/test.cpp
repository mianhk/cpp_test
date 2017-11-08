#include <iostream>

using namespace std;

class B{
public:
	void mf(){
		cout<<"我是父类"<<endl;
	}
};

class D:public B{
//public:
//	void mf(){
//		cout<<"我是子类"<<endl;
//	}
};


int main(){
	D d;
	B* pB=&d;
	pB->mf();
	
	D* pD=&d;
	pD->mf();
	
	return 0;
}
