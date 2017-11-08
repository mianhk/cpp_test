#include <iostream>
#include <vector>
#include <deque>
#include <string>
using namespace std;

int main(){
	string s;
	deque<string> de;
	while(cin>>s){
		de.push_front(s);
	}
	for(auto d:de){
		cout<<d<<endl;
	}
	return 0;
}
