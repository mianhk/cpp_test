#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<string> sv={"1","2","3","5"};
	int s=0;
	for(auto vv:sv){
		s+=stod(vv);
	}
	cout<<s<<endl;
	return 0;
}
