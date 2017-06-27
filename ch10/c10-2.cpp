#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

int main(){
	list<string> slst={"1","2","3","3","2","4"};
	cout<<count(slst.begin(),slst.end(),"2")<<endl;
	cout<<count(slst.begin(),slst.end(),"3")<<endl;
	return 0;
}
