#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;
int main(){
	fstream in("F:\\cpp_test\\ch11\\string.txt");
	if(!in){
		cout<<"文件打开失败"<<endl;
		exit(1);
	}
	string s;
	map<string,int> word_map;
	while(in>>s){
		auto ret=word_map.insert({s,1});
		if(!ret.second){
			++ret.first->second;
		}
	}
	for(const auto &w:word_map){
		cout<<w.first<<" :"<<w.second<<endl;
	}
	return 0;
}
