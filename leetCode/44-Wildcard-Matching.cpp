#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) { //sԭ�ַ��� p��ƥ���ַ��� 
		int m=s.length(),n=p.length();
		int i=0,j=0,star=-1,match;
		while(i<m){ 
			if(j<n&&p[j]=='*'){ //��ʱֱ�ӽ�j++,����¼���� 
				match=i;
				star=j++;
			}
			else if(j<n&& (s[i]==p[j]||p[j]=='?')){ //ƥ��ɹ�����+1 
				i++;j++;
			}
			else if(star>=0){//ֱ��û��ƥ���ϣ���star 
				i=++match;
				j=star+1;
			}
			else 
				return false;
		}
		while(j<n&&p[j]=='*') j++;//���s�Ѿ�ƥ���꣬��p��û������ 
		return j==n;
    }
};

int main(){
	Solution solution;
	string s="aaaaaaabaa";
	string p="a*a";
	cout<<(solution.isMatch(s,p)==false?"false":"true")<<endl;
	return 0;
}

