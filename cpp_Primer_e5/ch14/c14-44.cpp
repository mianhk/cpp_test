#include <iostream>
#include <functional>
#include <string>
#include <map>
using namespace std;

map<string,function<int(int,int)>> binops={
	{"+",[](int i,int j){return i+j;}},
	{"-",std::minus<int>()},
	{"/",[](int i,int j){return i/j;}},
	{"*",[](int i,int j){return i*j;}},
	{"%",[](int i,int j){return i%j;}}
	};
	
int main(){
	int a,b;
	string op;
	cin>>a>>op>>b;
	cout<<binops[op](a,b)<<endl;
	return 0;
}
