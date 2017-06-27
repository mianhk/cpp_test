#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
using namespace std;
void elimDups(vector<string> &words);
void print_vec(vector<string> v);
bool isShorter(const string &s1,const string &s2);
int main(){
	vector<string> svec;
	string word;
	fstream in("F:\\cpp_test\\ch10\\string.txt");
	while(in>>word){
		svec.push_back(word);
	}
	print_vec(svec);
	cout<<endl;
	elimDups(svec);
	print_vec(svec);
	cout<<endl;
	stable_sort(svec.begin(),svec.end(),isShorter);
	print_vec(svec);
	return 0;
}

void elimDups(vector<string> &words){
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}
void print_vec(vector<string> v){
	for(auto s:v){
		cout<<s<<",";
	}
}
bool isShorter(const string &s1,const string &s2){
	return s1.size()<s2.size();
}
