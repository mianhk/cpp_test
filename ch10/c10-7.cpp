#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <numeric>
using namespace std;

int main(){
	vector<int> vec;
	list<int> lst;
	int i;
//	while(cin>>i){
//		lst.push_back(i);
//	}
//	copy(lst.cbegin(),lst.cend(),back_inserter(vec));
//	for(auto i:vec){
//		cout<<i<<",";
//	}
	vector<int> vec1;
//	vec1.reserve(10);
	fill_n(back_inserter(vec1),10,0);
	for(auto i:vec1){
		cout<<i<<",";
	}
	return 0;
}
