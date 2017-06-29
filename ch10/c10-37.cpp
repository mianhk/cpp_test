#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	vector<int> ivec={1,2,3,5,78,8,9,43,56,10};
	list<int> ilst;
	copy(ivec.crbegin(),ivec.crend(),[](int a)->bool{if(a>=3&&a<7)
	return true;
	else return false;
	},back_inserter(ilst));
	
	return 0;
}
