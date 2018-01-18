#include <iostream>
#include <string>
using namespace std;

/*
Given a string s, find the longest palindromic substring in s. 
You may assume that the maximum length of s is 1000.

Example:

Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.
Example:

Input: "cbbd"

Output: "bb"
*/
class Solution {
public:
	int expandAroundCenter(string s,int left,int right){
		while(left>=0&&right<s.length()&&s[left]==s[right]){
			left--;
			right++;
		}
		return right-left-1;
	}
    string longestPalindrome(string s) {
		int start=0,end=0,len=0;
		for(int i=0;i<s.length();++i){
			int len1=expandAroundCenter(s,i,i);
			int len2=expandAroundCenter(s,i,i+1);
			int len=len1>len2?len1:len2;
			if(len>end-start){
				cout<<len<<" len"<<endl;
				start=i-(len-1)/2;
				end=i+len/2;
			}
		}
//		cout<<start<<" "<<end<<endl;
//		return s.substr(start,end+1);
		return s.substr(start,end-start+1); //注意substr的两个参数 
    }
};

int main(){
	Solution solution;
	string s="babad";
	string ss=solution.longestPalindrome(s);
	cout<<ss<<endl;
	return 0;
}

