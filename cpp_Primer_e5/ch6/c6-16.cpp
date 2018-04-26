#include <iostream>
using namespace std;
bool is_empty(string &s);
int main()
{
	string a{"sda"};
	cout<<a<<endl;
//	bool b=is_empty(a);
	cout<<a.empty()<<is_empty(a)<<endl;
	return 0;
}
bool is_empty(string &s){
	return s.empty();
}
