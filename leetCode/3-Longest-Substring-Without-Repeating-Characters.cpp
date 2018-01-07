#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;
/*
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> cset;
        int count=0;
        int res=0;
        for(int i=0;i<s.length();i++){
            auto iter=cset.find(s[i]);
            if(iter==cset.end()){
                count++;
                cset.insert(s[i]);
            }
            else{
                if(res<count){
                    res=count;
                    count=0;
                }
                cset.erase(iter,cset.end());
            }
        }
        return res;
    }
    int lengthOfLongestSubstring1(string s){
    	vector<int> cset(256,-1);
    	int maxLen=0,start=-1;
    	for(int i=0;i<s.length();++i){
    		if(cset[s[i]]>start)
    			start=cset[s[i]];
    		cset[s[i]]=i;
    		cout<<i<<" "<<start<<" "<<endl;
    		maxLen=max(maxLen,i-start);
		}
		return maxLen;
	}
};

int main(){
	Solution solution;
	string s="abcabcbb";
	cout<<solution.lengthOfLongestSubstring1(s)<<endl;
	return 0;
}

