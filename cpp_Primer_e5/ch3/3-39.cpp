#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s1{"helloworld"};
	string s2{"helloworld"};
	if(s1.size()!=s2.size()){
		cout<<"两个字符串不相等"<<endl;
	}
	else{
		for(int i=0;i!=s1.size()-1&&i!=s2.size()-1;++i){
			if(s1[i]!=s2[i]){
				cout<<"两个字符串不相等"<<endl;
				break;
			}
		}
	}
// C风格
//strcmp(s1,s2)?(cout<<"两个字符串不想等"<<endl):(cout<<"两个字符串相等"<<endl);

	return 0;
}

