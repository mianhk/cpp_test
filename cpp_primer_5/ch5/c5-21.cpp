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
			if(isupper(s1[0])){
			cout<<"�����ظ�Ԫ�أ�"<<s1<<endl;
			continue;	
			}
			
		}
		
	}
	return 0;
}


