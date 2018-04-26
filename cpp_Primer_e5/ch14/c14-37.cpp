#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class IntCompare{
	public:
		IntCompare()=default;
		IntCompare(int i):val(i){
		};
		bool operator()(int a){
			return val==a;
		}
	private:
		int val;
};

int main(){
	vector<int> ivec={1,2,3,4,5,6,3,5,3};
	const int i=3;
	const int n=10;
	IntCompare ic(i);
	std::replace_if(ivec.begin(),ivec.end(),ic,n);
	for(auto ii:ivec){
		cout<<ii<<" ";
	}
	cout<<endl;
	return 0;
}
