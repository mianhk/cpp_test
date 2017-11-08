#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
	vector<int> v1={1,2,3};
	list<int> l2={1,2,3};
	bool flag=false;
	auto it1=v1.begin();
	for(auto it2=l2.begin();it1!=v1.end()||it2!=l2.end();++it1,++it2){
		if(*it1!=*it2){
			flag=false;
			break;
		}
		else{
			flag=true;
		}
	}
	cout<<(flag?"相等":"不相等")<<endl;
	return 0;
}
