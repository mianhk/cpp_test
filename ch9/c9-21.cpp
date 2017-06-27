#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
using namespace std;

int main(){
	string word;
	vector<string> v;
	auto iter=v.begin();
	while(cin>>word){
		iter=v.insert(iter,word);
	}
	for(auto vv:v){
		cout<<"#"<<vv<<endl;
	}
	return 0;
}
