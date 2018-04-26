//filename:deque-test.cpp
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	deque<int> ideq(20,9);
	cout<<"size="<<ideq.size()<<endl;

	//为每个元素设定新值
	for(int i=0;i!=ideq.size();++i)
		ideq[i]=i;
		
	for(int i=0;i!=ideq.size();++i)
		cout<<ideq[i]<<" ";
	cout<<endl;
	cout<<"size="<<ideq.size()<<endl;
	
	for(int i=0;i!=3;++i)
		ideq.push_back(i+20);
	
	for(int i=0;i!=ideq.size();++i)
		cout<<ideq[i]<<" ";
	cout<<endl;	
	cout<<"size="<<ideq.size()<<endl;
	
	ideq.push_back(3);
	for(int i=0;i!=ideq.size();++i)
		cout<<ideq[i]<<" ";
	cout<<endl;	
	cout<<"size="<<ideq.size()<<endl;
	



	return 0;
}
