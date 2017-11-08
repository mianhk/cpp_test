#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main(){
	list<int> ilst={1,2,3,4,5,6,7,8,9,10};
//	list<int>::iterator it=li.end()-3;
	vector<int> v(ilst.begin(),ilst.end());
	for(auto vv:v){
		cout<<vv<<endl;
	}
	return 0;
}
