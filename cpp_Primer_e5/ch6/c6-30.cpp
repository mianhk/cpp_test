#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int v1=3,v2=4;
	swap(v1,v2);
	cout<<v1<<"  "<<v2<<endl;
	return 0;
}
void swap(int &v1,int &v2){
	if(v1==v2)
	return;
	int tmp=v1;
	v1=v2;
	v2=tmp;
}

