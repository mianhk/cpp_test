#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> s{" "};
	cout<<s.size()<<endl;
	string s1;
	while(cin>>s1){
		if(s1!=s[s.size()-1]){ //һ��Ҫע�� 
			s.push_back(s1);
		}
		else{
			cout<<"�����ظ�Ԫ�أ�"<<s1<<endl;
			break;
		}
		
	}
	return 0;
}

