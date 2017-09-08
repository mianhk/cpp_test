#include <iostream>
using namespace std;
int fact(int val);
int main()
{
	int i;
	while(cin>>i){
		cout<<fact(i)<<endl;
	}
	return 0;
}
int fact(int val){
	int ret=1;
	while(val>1)
	ret*=val--;
	return ret;
}

