#include <iostream>
#include "Chapter6.h"
using namespace std;
int main()
{
	string s{"dsasdaFDFs"};
	cout<<(has_upper(s)?"true":"false")<<endl;
	to_lower(s);
	cout<<s<<endl;
	return 0;
}

bool has_upper(const string& s){
	for(auto c:s){
		if(isupper(c)){
			return true;
		}
	}
	return false;
}

void to_lower(string& s){
	for(char& c:s){
		c=tolower(c);
	}
}

