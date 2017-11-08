#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
void change_val(string &s,const string &oldVal,const string &newVal);
int main(){
	string s="tho thro tho!";
	change_val(s,"thro","through");
	cout<<s<<endl;
	change_val(s,"tho","though");
	cout<<s<<endl;
	return 0;
	return 0;
}
void change_val(string &s,const string &oldVal,const string &newVal){
	int p=0;
	while((p=s.find(oldVal,p))!=string::npos){
		s.replace(p,oldVal.size(),newVal);
		p+=newVal.size();
	}
}
