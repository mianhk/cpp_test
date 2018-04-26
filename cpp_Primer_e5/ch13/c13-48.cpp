#include <iostream>
#include <vector>
#include "myString.h"
using namespace std;

int main(){
	vector<String> svec;
	char a[10]="ewqewqeq";
	for(int i=0;i!=3;++i){
		String c(a);
		svec.push_back(c);
	}
		
	return 0;
}
