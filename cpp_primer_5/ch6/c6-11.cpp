
#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int i=10;
	reset(&i);
	cout<<i<<endl;
	return 0;
}
void reset(int *p){
	*p=0;
}
