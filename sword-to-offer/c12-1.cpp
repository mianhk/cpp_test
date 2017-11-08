#include <iostream>

using namespace std;

double Power(double base,int exponent){
	double result=1.0;
	while(exponent){
		if(exponent&1){
//			--exponent;
			result*=base;
			//exponent=exponent>>2;
//			cout<<exponent<<"kaishi"<<endl;
		}
		exponent>>=1;
		base*=base;
		
	}
	return result;
}


int main(){
//	int c=10;
//	while(c>>2){
//		cout<<c<<endl;
//		--c;
//	}
	double s=Power(2,5);
	cout<<s<<endl;
	
	return 0;
}
