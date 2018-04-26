#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> s{" "};
	cout<<s.size()<<endl;
	string s1;
	while(cin>>s1){
		if(s1!=s[s.size()-1]){ //一定要注意 
			s.push_back(s1);
		}
		else{
			cout<<"出现重复元素："<<s1<<endl;
			break;
		}
		
	}
	return 0;
}

