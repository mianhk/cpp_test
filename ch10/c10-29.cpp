#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>
using namespace std;
int main(){
	vector<string> vec;
	ifstream in("F:\\cpp_test\\ch10\\string.txt");
	istream_iterator<string> string_it(in);
	istream_iterator<string> eof;
	while(string_it!=eof){
		vec.push_back(*string_it++);
	}
//	for(auto s:vec){
//		cout<<s<<endl;
//	}
	ostream_iterator<string> out_iter(cout," ");
	for(auto s:vec){
		*out_iter++=s;
	}
	cout<<endl;
	return 0;
}
