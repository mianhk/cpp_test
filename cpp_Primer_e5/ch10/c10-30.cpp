#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	ifstream in("F:\\cpp_test\\ch10\\integer.txt");
	istream_iterator<int> int_it(in);
	istream_iterator<int> eof;
	ostream_iterator<int> out_it(cout," ");
	vector<int> ivec;
	while(int_it!=eof){
		ivec.push_back(*int_it++);
	}
	sort(ivec.begin(),ivec.end(),[](int a,int b){return a>b;
	});
	for(auto i:ivec){
		*out_it++=i;
	}
	cout<<endl;
	return 0;
}
