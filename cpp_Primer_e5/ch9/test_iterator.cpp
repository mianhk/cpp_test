#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main(){
	vector<int> v{1,2,3,44,5,6};
	int i=4;
	auto it=v.begin();
	cout<<typeid(it)<<endl;
	return 0;
}
