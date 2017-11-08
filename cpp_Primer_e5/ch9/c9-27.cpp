#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
int main(){
	forward_list<int> iflst={0,1,1,2,3,5,8,13,21,55,89};
	forward_list<int>::iterator prev=iflst.before_begin();
	forward_list<int>::iterator iter=iflst.begin();
	while(iter!=iflst.end()){
		if(*iter%2){
			iter=iflst.erase_after(prev);
		}
		else
		{
			prev=iter;
			++iter;
		}
	}
	iter=iflst.begin();
	while(iter!=iflst.end()){
		cout<<*iter++<<endl;
	}
	return 0;
}
