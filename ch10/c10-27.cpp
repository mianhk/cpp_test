#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	ifstream in("F:\\cpp_test\\ch10\\integer.txt");
	int i=0;
	vector<int> ivec;
	list<int> ilst;
	while(in>>i){
		ivec.push_back(i);
	}
	unique_copy(ivec.begin(),ivec.end(),back_inserter(ilst));//不能直接用ilst.begin() 
	for(auto il:ilst){
		cout<<il<<" ";
	}
	cout<<endl;
	return 0;
}
