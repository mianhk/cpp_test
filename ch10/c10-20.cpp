#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;
int main(){
	ifstream in("F:\\cpp_test\\ch10\\string.txt");
	vector<string> svec;
	string s;
	while(in>>s){
		svec.push_back(s);
	}
	
	for(auto ss:svec){
		cout<<ss<<endl;
	}
	auto i=count_if(svec.begin(),svec.end(),[](const string &s1)->bool{if(s1.size()<4)return true;
	else return false;});
	cout<<i<<endl;
	return 0;
}
