#include <iostream>
#include <string>
using namespace std;
/*
Implement regular expression matching with support for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") �� false
isMatch("aa","aa") �� true
isMatch("aaa","aa") �� false
isMatch("aa", "a*") �� true
isMatch("aa", ".*") �� true
isMatch("ab", ".*") �� true
isMatch("aab", "c*a*b") �� true
*/
class Solution {
public:
    bool isMatch(string s, string p) {
		if(s.length()==0&&p.length()==0)
			return true;
		if(p[0]!=0&&p[1]=='*')
			if(isMatch(s,p.substr(2,p.length()-2)))
				return true;
		if((p[0]=='.'&&s[0])||p[0]==s[0]){
			if(isMatch(s.substr()))
		}
    }
};

int main(){
	Solution solution;

	return 0;
}

