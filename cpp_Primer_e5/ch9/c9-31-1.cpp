#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
int main(){
	list<int> ilst={0,1,2,3,4,5,6,7,8,9};
	auto iter=ilst.begin();
	while(iter!=ilst.end()){
		if(*iter%2){
			iter=ilst.insert(iter,*iter);
			iter++;iter++;
		}
		else{
			iter=ilst.erase(iter);
		}
	}
	
	//´òÓ¡vector
	for(auto v:ilst){
		cout<<v<<endl;
	} 
	return 0;
}
