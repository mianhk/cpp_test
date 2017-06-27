#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
forward_list<string> insert_string(forward_list<string> &flst,string s1,string s2);

int main(){
	forward_list<string> flst{"qwe","wq","kaishi","lo"};
	flst=insert_string(flst,"kaishi","1111");
	for(auto f:flst){
		cout<<f<<endl;
	}
	return 0;
}

forward_list<string> insert_string(forward_list<string> &flst,string s1,string s2){
	forward_list<string>::iterator prev=flst.before_begin();
	forward_list<string>::iterator iter=flst.begin();
	while(iter!=flst.end()){
		if(*iter==s1){
			iter=flst.insert_after(iter,s2);
			return flst;
		}
		++iter;
		++prev;
	}
	flst.insert_after(flst.end(),s2);
	
	return flst;
}
