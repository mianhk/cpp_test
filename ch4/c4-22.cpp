#include <iostream>
using namespace std;
int main()
{
	int grade;
	cin>>grade;
	//第一种方式：使用条件运算符
	cout<<((grade>80)?"high pass":(grade<75&& grade>=60)?"low pass":"fail")<<endl; 
	//第二种方式
	if(grade>80)
	cout<<"high pass";
	else if(grade>=60 && grade<75) 
	cout<<"low pass";
	else 
	cout<<"fail";
	return 0;
}

