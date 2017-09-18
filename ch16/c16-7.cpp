#include <iostream>

using namespace std;

template<typename T,size_t N>
constexpr int arr_size(T (&a)[N]){
	return N;
}


int main(){
	int a[12]={1,2,3,4};
	cout<<arr_size(a)<<endl;
	return 0;
}
