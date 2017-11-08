#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;
vector<int> add_elem(vector<int> &iv,int some_val);
int main(){
	vector<int> v={1,2,3,4,5};
	v=add_elem(v,2);
	for(vector<int>::iterator it=v.begin();it!=v.end();++it){
		cout<<*it<<endl;
	}
	
	return 0;
}

vector<int> add_elem(vector<int> &iv,int some_val){
	vector<int>::iterator iter=iv.begin(),mid=iv.begin()+(iv.end()-iv.begin())/2;
	while(iter!=mid){
		if(*iter==some_val){
			iter=iv.insert(iter,2*some_val);
			mid=iv.begin()+(iv.end()-iv.begin())/2;
			++iter;
		}
		++iter;
	}
	return iv;
}
