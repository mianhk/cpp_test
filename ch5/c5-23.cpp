#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int i1,i2;
	while(cin>>i1>>i2){

if(i2==0){
	cout<<"����ĳ���Ϊ0�����������룺"<<endl;
}
else{
	cout<<"����������Ľ���ǣ�"<<i1/i2<<endl;
}
	}
	return 0;
}

