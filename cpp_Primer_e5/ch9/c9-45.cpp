#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
string add_name(string s,const string s1,const string s2);
int main(){
	string s="yuguocng";
	s=add_name(s,"Mr.","Jr.");
	cout<<s<<endl;
	return 0;
}

string add_name(string s,const string s1,const string s2){
	auto iter=s.begin();
	auto iter1=s1.end();
	auto iter2=s2.begin();
	while(iter1!=s1.begin()){
		iter1--;
		iter=s.insert(iter,*iter1);
	}
	s.append(" "+s2);

	return s;
}
