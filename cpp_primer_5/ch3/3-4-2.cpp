#include <iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()==s2.size()){
		cout<<"�����ַ����������"<<endl;
	}
	else if(s1.size()>s2.size()){
		cout<<s1<<endl;
	}
	else
	cout<<s2;
	return 0;
}

