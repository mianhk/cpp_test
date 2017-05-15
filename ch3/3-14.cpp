#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int s;
	vector<int> word;
	while(cin>>s){
		word.push_back(s);
	}
	//test
	for(auto w:word){
		cout<<w<<endl;
	}
	return 0;
}

