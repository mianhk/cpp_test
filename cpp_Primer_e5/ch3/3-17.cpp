#include <vector>
#include <iostream>
using namespace std;
int main()
{
	string s;
	vector<string> word;
	while(cin>>s){
		for(char &c:s){
			c=toupper(c);
		}
		word.push_back(s);
	}
	//test
	for(auto w:word){
		cout<<w<<endl;
	}
	return 0;
}

