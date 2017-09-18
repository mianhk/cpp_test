#include <iostream>

using namespace std;

template <typename T>
T compare(const T &v1,const T &v2){
	return (v1>v2)?v1:v2;
}
int main(){
	int i1=1,i2=2;
	double d1=4,d2=3;
	cout<<compare<int>(1,2)<<endl;
	cout<<compare<double>(d1,d2)<<endl;
	return 0;
}
