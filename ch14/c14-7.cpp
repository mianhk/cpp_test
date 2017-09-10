#include <iostream>
#include <vector>
#include "myString.h"

using namespace std;

ostream &operator<<(ostream &os,const String &item){
	os<<item.size()<<" "<<item.length();
}

int main(){
//	vector<String> svec;
	char a[10]="ewqewqeq";
	String s(a);
	cout<<s; 
	return 0;
}
