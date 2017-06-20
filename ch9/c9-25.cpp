#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main(){
	int a[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> iv;
	list<int> ilst;
	for(int *p=a;p!=(sizeof(a)/sizeof(*a);++p){
		iv.push_back(*p);
		ilst.push_back(*p);
	}
	
	return 0;
}
