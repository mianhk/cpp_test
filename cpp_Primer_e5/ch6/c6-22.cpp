#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int i1=3;
	int i2=8;
	change_point(&i1,&i2);
//	cout<<i1<<"  "<<i2<<endl;
	return 0;
}
void change_point(int *i1,int *i2){
	cout<<*i1<<"  "<<*i2<<endl;
	int * temp=i1;
	i1=i2;
	i2=temp;
	cout<<*i1<<"  "<<*i2<<endl;
}
