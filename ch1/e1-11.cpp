#include <iostream>
using namespace std;
int main()
{
	int c1,c2;
	cin>>c1>>c2;
	if(c1>=c2){
		int temp=c2;
		c2=c1;
		c1=temp;
	}
	while(c1<=c2){
		cout<<c1++<<endl;
	}
	return 0;
}

