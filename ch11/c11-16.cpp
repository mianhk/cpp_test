#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	map<string,int> map_it{{"a",2},{"b",3}};
	auto it=map_it.begin();
	while(it!=map_it.end()){
		++it->second;
		++it;
	}
	for(const auto &m:map_it){
		cout<<m.first<<":"<<m.second<<endl;
	}
	return 0;
}
