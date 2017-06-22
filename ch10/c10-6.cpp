#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <numeric>
using namespace std;

int main(){
	list<int> ilst;
	fill_n(back_inserter(ilst),10,0);
	for(auto i:ilst){
		cout<<i<<endl;
	}
	return 0;
}
