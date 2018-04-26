#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main(){
	list<char *> ilst={"kaishi","cds","cdsada","fsfac","cwww"};
	vector<string> s;
	s.assign(ilst.begin(),ilst.end());
	for(auto ss:s){
		cout<<ss<<endl;
	}
	return 0;
}
