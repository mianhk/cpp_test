#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	int ia[10];
	for(int i=0;i!=10;++i){
		get(ia,i)=i*2;
		cout<<ia[i]<<",";
	}
	return 0;
}
int &get(int *array,int index){
	return array[index];
}
