#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main(){
	string s;
	list<string> ilst;
	while(cin>>s){
		ilst.push_back(s);
	}
	for(auto d:ilst){
		cout<<d<<endl;
	}
	return 0;
}
