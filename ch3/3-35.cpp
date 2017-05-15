#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int *p=begin(a);
	while(p!=end(a)){
//		cout<<"\""<<endl;
		*p++=0;
		
	}
	for(auto a1:a){
		cout<<a1;
	}
	return 0;
}

