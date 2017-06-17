#include <iostream>
using namespace std;
int main()
{
	int a[10]={3,3,3,3,3,3,3,3,3,3};
	int *p=begin(a);
	while(p!=end(a)){
//		*p++=3;
		cout<<*p++<<",";
	}
	cout<<endl;
	while(p!=end(a)){
//		cout<<"\""<<endl;
		*p++=0;
		
	}
	for(auto a1:a){
		cout<<a1<<",";
	}
	cout<<endl;
	return 0;
}

