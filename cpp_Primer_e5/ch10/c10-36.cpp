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
	cout<<"û���ҵ�0"<<endl;
	else
	cout<<"���һ��0�ڵ�"<<p<<"��λ����"<<endl;
	return 0;
}
