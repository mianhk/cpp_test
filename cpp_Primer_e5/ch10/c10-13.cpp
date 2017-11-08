#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
bool judge_5(const string &s);
void print_vec(vector<string> v1,vector<string> v2);
int main(){
	fstream in("F:\\cpp_test\\ch10\\string.txt");
	vector<string> words;
	string s;
	while (in>>s){
		words.push_back(s);
	}
	auto p=words.begin();
	while(p!=words.end()){
		cout<<*p++<<endl;
	}
	cout<<"***********"<<endl;
	auto mid=partition(words.begin(),words.end(),judge_5);
	p=words.begin();
	while(p!=mid){
		cout<<*p++<<endl;
	}
	return 0;
}

bool judge_5(const string &s){
	return s.size()>=5;
}
//void print_vec(vector<string> v1,vector<string> v2){
//	while(v1!=v2){
//		cout<<*v1<<endl;
//	}
//}
