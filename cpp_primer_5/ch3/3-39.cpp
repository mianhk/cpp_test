#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s1{"helloworld"};
	string s2{"helloworld"};
	if(s1.size()!=s2.size()){
		cout<<"�����ַ��������"<<endl;
	}
	else{
		for(int i=0;i!=s1.size()-1&&i!=s2.size()-1;++i){
			if(s1[i]!=s2[i]){
				cout<<"�����ַ��������"<<endl;
				break;
			}
		}
	}
// C���
//strcmp(s1,s2)?(cout<<"�����ַ��������"<<endl):(cout<<"�����ַ������"<<endl);

	return 0;
}

