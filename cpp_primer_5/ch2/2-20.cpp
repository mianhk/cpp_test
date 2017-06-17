#include <iostream>
using namespace std;
int main()
{
	int i=42;
	int *pi=&i;
	*pi=*pi**pi;
	cout<<*pi<<endl;
	cout<<i<<endl;//1764
	return 0;
}

