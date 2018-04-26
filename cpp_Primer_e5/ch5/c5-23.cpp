#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int i1,i2;
	while(cin>>i1>>i2){

if(i2==0){
	cout<<"输入的除数为0，请重新输入："<<endl;
}
else{
	cout<<"两个数相除的结果是："<<i1/i2<<endl;
}
	}
	return 0;
}

