#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) { //s原字符串 p：匹配字符串 
		int m=s.length(),n=p.length();
		int i=0,j=0,star=-1,match;
		while(i<m){ 
			if(j<n&&p[j]=='*'){ //此时直接将j++,并记录下来 
				match=i;
				star=j++;
			}
			else if(j<n&& (s[i]==p[j]||p[j]=='?')){ //匹配成功各自+1 
				i++;j++;
			}
			else if(star>=0){//直到没有匹配上，看star 
				i=++match;
				j=star+1;
			}
			else 
				return false;
		}
		while(j<n&&p[j]=='*') j++;//如果s已经匹配完，但p还没完的情况 
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

