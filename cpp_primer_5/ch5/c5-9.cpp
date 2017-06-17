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
	cout<<"元音数为："<<sum<<" 空格数为:"<<space<<" 制表符个数为"<<tab<<" 换行符数为："<<changeline<<endl;
	return 0;
}

