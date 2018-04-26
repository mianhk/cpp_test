#include <iostream>
#include <vector>
#include <fstream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
string &trans(string &s){
	for(int p=0;p!=s.size();p++){
		if(s[p]>='A'&& s[p]<='Z')
		s[p]-=('A'-'a');
		else if(s[p]==','||s[p]=='.')
		s.erase(p,1);
	}
	return s;
}
int main(){
	ifstream in("F:\\cpp_test\\ch11\\string.txt");
	if(!in){
		cout<<"文件打开失败"<<endl;
		exit(1);
	}
	string s;
	set<string> unique_word;
	while(in>>s){
		unique_word.insert(s);
	}
	for(const auto &w:unique_word){
		cout<<w<<" ";
		cout<<endl;
	}
	return 0;
}
