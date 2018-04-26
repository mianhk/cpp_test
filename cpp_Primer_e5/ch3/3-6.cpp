#include <iostream>
using namespace std;
//用for将字符串里的所有字符都用xx替代 
int main()
{
	string s("sdhauikshdakhsd");
	for(auto &c:s){
		c="x";
	}
	cout<<s;
	return 0;
}

