#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename C>
void print2nd(const C& container){
	typename C::const_iterator iter(container.begin());//typenameµÄÊ¹ÓÃ 
	++iter;
	int val=*iter;
	std::cout<<val;
}

int main(){
	vector<int> ivec={1,4,3};
	print2nd(ivec);
	
	return 0;
}
