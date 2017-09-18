#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename I,typename T>
I find(I b,I e,const T &v){
	while(b!=e && *b!=v)
		++b;
	return b;
}
int main(){
	vector<int> ivec={1,2,3,4,6,7};
	list<std::string> slst={"a","b","c"};
	auto iter=find(ivec.cbegin(),ivec.cend(),5);
	if(iter==ivec.end())
		cout<<"û���ҵ�5"<<endl;
	else
		cout<<"�ҵ���5"<<endl;
	
	auto iter2=find(slst.begin(),slst.end(),"a");
	if(iter2==slst.end())
		cout<<" û���ҵ�a"<<endl;
	else
		cout<<"�ҵ���a"<<endl; 
}
