#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int d1,d2;
	cin>>d1>>d2;
	change_value(d1,d2);
	cout<<d1<<" "<<d2<<endl;
	return 0;
}
void change_value(int &c1,int &c2){
	int temp=c1;
	c1=c2;
	c2=temp;
}
