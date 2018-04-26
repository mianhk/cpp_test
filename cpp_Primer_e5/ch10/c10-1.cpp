#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> iv={1,2,3,4,6,2,3,2};
	cout<<count(iv.begin(),iv.end(),2)<<endl;
	cout<<count(iv.begin(),iv.end(),3)<<endl;
	return 0;
}
