#include <iostream>

using namespace std;

class B{
public:
	void mf(){
		cout<<"���Ǹ���"<<endl;
	}
};

class D:public B{
//public:
//	void mf(){
//		cout<<"��������"<<endl;
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
