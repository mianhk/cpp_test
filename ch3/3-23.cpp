#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> text={1,2,3,4,5,6,7,8,9,10};
	for(auto it=text.begin();it !=text.end();++it){
		cout<<2* *it<<endl;
	}
	return 0;
}

