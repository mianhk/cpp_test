#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
using namespace std;
//函数声明 
map<string,string> generate_map(ifstream &map_file);
const string &
transform(const string &s,const map<string,string> rule_map);

int main(){
	ifstream rule("F:\\cpp_test\\ch11\\trans_map.txt");
	ifstream in("F:\\cpp_test\\ch11\\to_trans.txt");
	map<string,string> rule_map=generate_map(rule);
	
	string text;
	while(getline(in,text)){
		istringstream stream(text);
		string word;
		bool firstword=true;
		while(stream>>word){
			if(firstword){
				firstword=false;
			}
			else
				cout<<" ";
			cout<<transform(word,rule_map);
		}
		cout<<endl;
	}
	return 0;
}

map<string,string> generate_map(ifstream &map_file){
	map<string,string> rule_map;
	string key;
	string value;
	while(map_file>>key && getline(map_file,value)){
		if(value.size()>1){
			rule_map[key]=value.substr(1);
		}
		else{
			cout<<"文件格式错误"<<endl;
			exit(1);
		}
			
			
	}
	return rule_map;
}

const string &
transform(const string &s,const map<string,string> rule_map){
	auto map_it=rule_map.find(s);
	if(map_it!=rule_map.end()){
		return map_it->second;
	}
	else
	return s;
}
