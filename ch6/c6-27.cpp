#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	cout<<add_all({1,2,3,4,5})<<endl;
	return 0;
}

int add_all(initializer_list<int> il){
	int result=0;
	for(auto beg=il.begin();beg!=il.end();++beg){
		result+=*beg;
	}
	return result;
}
