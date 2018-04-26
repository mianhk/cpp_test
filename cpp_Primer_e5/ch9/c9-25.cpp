#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main(){
	int a[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> iv;
	list<int> ilst;
	iv.assign(a,a+11);
	ilst.assign(a,a+11);
	vector<int>::iterator iter1=iv.begin();
	list<int>::iterator iter2=ilst.begin();
//	for(int *p=a;p!=end(a);++p){
//		iter1=iv.insert(iter1,*p);
//		iter2=ilst.insert(iter2,*p);
////		iv.push_back(*p);
////		ilst.push_back(*p);
//		cout<<*p<<endl;
////		((*p)%2)?(iv.erase(iter1)):(ilst.erase(iter2));
//	}
	while(iter1!=iv.end()){
		if(*iter1%2){
			iter1=iv.erase(iter1);
		}
		else
			++iter1;
	}
	while(iter2!=ilst.end()){
		if(!(*iter2%2)){
			iter2=ilst.erase(iter2);
		}
		else
			++iter2;
	}
	for(auto i:iv){
		cout<<i<<",";
	}
	cout<<"**********************"<<endl;
	for(auto j:ilst){
		cout<<j<<",";
	}
	
	return 0;
}
