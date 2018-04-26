#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template<typename T>
class print{
	public:
		void operator()(const T& elem)
		{cout<<elem<<' ';}
};
int main(){
	int ia[6]={0,1,2,3,4,5};
	vector<int> ivec(ia,ia+6);
	
	for_each(ivec.begin(),ivec.end(),print<int>());	
	
	return 0;
}
