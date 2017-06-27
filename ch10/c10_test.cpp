#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <numeric>
using namespace std;

int main(){
	list<int> ilst={1,2,3,4,5};
	int result=accumulate(ilst.cbegin(),ilst.cend(),0);
	cout<<result<<endl;
	cout<<"****"<<endl;
	vector<string> sv={"qw","ert","yu"};
	string s=accumulate(sv.cbegin(),sv.cend(),string("dsada"));
	cout<<s<<endl;
	return 0;
}
