#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
	list<int> ilst={1,0,2,3,0,6};
//	auto iter=ivec.cr();
//	while(iter!=ivec.cbegin()){
//		cout<<*--iter<<endl;
//	}
	auto s=find(ilst.crbegin(),ilst.crend(),0);
	s++;
	int p=1;
	for(auto iter=ilst.cbegin();iter!=s.base();iter++,p++);
	if(p>=ilst.size())
	cout<<"没有找到0"<<endl;
	else
	cout<<"最后一个0在第"<<p<<"个位置上"<<endl;
	return 0;
}
