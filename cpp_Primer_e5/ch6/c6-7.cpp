#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
	int i=10;
	while(i>0){
		cout<<count_foobar()<<endl;
		i--;
	}
	return 0;
}
int count_foobar(){
	static int sum=0;
	return sum++;
}

