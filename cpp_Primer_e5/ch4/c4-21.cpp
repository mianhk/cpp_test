#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> word{1,2,24,54,564,6,57,567,6,8};
	for(int a:word){
		cout<<((a%2==0)?a:2*a)<<endl;
	}
	return 0;
}

