#include <iostream>

using namespace std;

template<typename T,size_t N>
void print(const T (&a)[N]){
	for(auto iter=begin(a);iter!=end(a);++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

int main(){
	int a[12]={1,2,3,4,5};
	print<int,12>(a);
	return 0;
}
