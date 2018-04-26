#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	set<int> iset={1,2,3,5,6,3,2};
	for(auto ii:iset)
		cout<<ii<<" ";
	cout<<endl;
	cout<<*iset.begin()<<endl;
	return 0;
}
