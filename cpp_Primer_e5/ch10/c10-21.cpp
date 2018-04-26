#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	int i=10;
	auto sub_1=[&i]()->bool{
		--i;
	if(!i){
		cout<<"**"<<endl;
		return true;
	}
	else{
		return false;
	}
	};
	for(int t=0;t!=12;++t){
		cout<<sub_1()<<endl;
	}
	return 0;
}
