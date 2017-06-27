#include <iostream>
using namespace std;
int add(int a);
int main(){
	int a=3;
	int result=add(3);
	cout<<result<<endl;
	return 0;
}
int add(int a){
	int s=0;
	auto sum=[a](int b){
		return a+b;
	};
	s=sum(3)+a;
	return s;
}
