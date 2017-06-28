#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>
using namespace std;
int main(){
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
//	for(int i=0;i!=10;++i){
//		v1.(i);
//		v2.
//	}
vector<int> vec={1,2,3,4,5};
	ostream_iterator<int> out_iter(cout," ");
	for (auto e:vec){
		*out_iter++=e;
	}
	cout<<endl;
	return 0;
}
