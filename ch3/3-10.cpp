#include <iostream>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
	for(char c :s){
		if(!ispunct(c)){
			cout<<c;
		}
		
	}
	return 0;
}

