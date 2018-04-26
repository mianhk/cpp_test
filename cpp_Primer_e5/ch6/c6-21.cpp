#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int i1=50;
	int i2=60;
	cout<<cmp_int(i1,&i2)<<endl;
	return 0;
}

int cmp_int(int i1,int* i2){
	return i1>*i2?i1:*i2;
}
