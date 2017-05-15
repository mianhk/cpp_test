#include <iostream>
using namespace std;
int main()
{
	int i=0;
//	double *dp=&i;  //不能将int型赋给double型的指针
//int *ip=i;  //错误 
int *p=&i; 
	return 0;
}

