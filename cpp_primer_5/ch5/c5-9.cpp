#include <iostream>
using namespace std;
int main()
{
	string s,t;
	while(cin>>t){
		s+=t;
	}
	cout<<s<<endl;
	int sum=0;
	int space=0;
	int tab=0;
	int changeline=0;
	for(char c:s){
		switch(tolower(c)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				++sum;
				break;
			case ' ':
				++space;
			case '\t':
				++tab;
			case '\n':
				++changeline;
		}
			
	}
	cout<<"Ԫ����Ϊ��"<<sum<<" �ո���Ϊ:"<<space<<" �Ʊ������Ϊ"<<tab<<" ���з���Ϊ��"<<changeline<<endl;
	return 0;
}

