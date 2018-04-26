#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	vector<int> ivec={1,2,3};
	auto iter=ivec.crbegin();
	while(iter!=ivec.crend()){
		cout<<*iter++<<endl;
	}
	return 0;
}
