#include <iostream>
#include <vector>
using namespace std;
bool find_int(vector<int> v,int i);
int main(){
	vector<int> v{1,2,3,44,5,6};
	int i=4;
	cout<<(find_int(v,i)?"true":"false")<<endl;
	return 0;
}

bool find_int(vector<int> v,int i){
	bool b=false;
	auto it=v.cbegin();
	while(it!=v.cend()){
		if(*it==i){
			b=true;
			break;
		}	
		it++;
	}
	return b;
}


