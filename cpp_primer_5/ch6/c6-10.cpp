#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int i1,i2;
	while(cin>>i1>>i2){
		change_value(&i1,&i2);
		cout<<i1<<" "<<i2<<endl;
	}
	return 0;
}
void change_value(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
