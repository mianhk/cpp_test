#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string s;
	vector<string> word;
	while(cin>>s){
		word.push_back(s);
	}
	//test
	for(auto w:word){
		cout<<w<<endl;
	}
	return 0;
}

