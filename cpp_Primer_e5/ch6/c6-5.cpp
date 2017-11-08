#include <iostream>
using namespace std;
int absolute(int *val);
int main()
{
	int i;
	while(cin>>i){
		cout<<absolute(&i)<<endl;
		cout<<i<<endl;
	}
	return 0;
}
int absolute(int *val){
	*val>0?*val=*val:*val=-*val;
	return *val;
}

