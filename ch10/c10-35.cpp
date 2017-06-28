#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	vector<int> ivec={1,2,3};
	auto iter=ivec.cend();
	while(iter!=ivec.cbegin()){
		cout<<*--iter<<endl;
	}
	return 0;
}
