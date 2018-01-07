#include <iostream>
#include <string>
using namespace std;
/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
*/
class Solution {
public:
    int strStr(string haystack, string needle) {  //”–Œ Ã‚ 
        int i=0,j=0;
        if(haystack.length()<needle.length())
            return -1;
    	if(!needle.length())
    		return 0;
        while(i<haystack.length()-needle.length()+1){
            if(haystack[i]==needle[j]){
            	cout<<i<<" "<<j<<endl;
                if(j==needle.length()-1){
                    return i-j;
                }
                ++i;++j;
            }
            else{
                i+=j+1;
                j=0;
            }
        }
        return -1;
    }
    int strStr1(string haystack, string needle){
    	if(!needle.length())
    		return 0;
    	if(haystack.length()<needle.length())
    		return -1;
    	for(int i=0;i<haystack.length()-needle.length()+1;++i){
    		int j=0;
    		for(;j<needle.length();++j){
    			if(haystack[i+j]!=needle[j])
    				break;
			}
			if(j==needle.length())
				return i;
		}
		return -1;
	}
};

int main(){
	Solution solution;
//	string s1="mississippi";
//	string s2="issip";
	string s1="abb";
	string s2="abaaa";
	cout<<solution.strStr1(s1,s2)<<endl;
	return 0;
}

