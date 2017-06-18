#include <iostream>
using namespace std;

class NoDefault{

	public:
		NoDefault(int v):val(v){
		}

		int val; 
};

class C{
	public:
		
		C():nd(3){
		}
		C(int i):nd(i){
		}
		NoDefault nd;
};
int main(){
//	NoDefault n(3);
	C c(3);
	cout<<c.nd.val<<endl;
	return 0;
}
