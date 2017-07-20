#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <string>

using namespace std;
int main(){
	ifstream in("F:\\cpp_test\\ch11\\string2.txt");
	if(!in){
		cout<<"文件打开失败"<<endl;
		exit(1);
	}
	string s;
	string s1;
	int i1;
	pair<string,int> word;
	vector<pair<string,int>> wpair;
	while(getline(in,s)){
		s1=s.substr(0,s.find_first_of(" "));
		i1=stod(s.substr(s.find_first_of(" ")));
		word.first=s1;
		word.second=i1;
		wpair.push_back(word);
	}
	for(const auto &w:wpair){
		cout<<w.first<<":"<<w.second<<" "<<endl;
	}
	return 0;
}
