#include <iostream>
using namespace std;
int main()
{
	int grade;
	cin>>grade;
	//��һ�ַ�ʽ��ʹ�����������
	cout<<((grade>80)?"high pass":(grade<75&& grade>=60)?"low pass":"fail")<<endl; 
	//�ڶ��ַ�ʽ
	if(grade>80)
	cout<<"high pass";
	else if(grade>=60 && grade<75) 
	cout<<"low pass";
	else 
	cout<<"fail";
	return 0;
}

