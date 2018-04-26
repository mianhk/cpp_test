#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	if(strs.size()==0)
    		return "";
        string res=strs[0];
        for(int i=0;i!=strs.size();++i){
        	string s=strs[i];
        	cout<<s<<endl;
        	for(int j=0;j<=s.length();++j){
        		if(j<res.length()&&res[j]!=s[j]){
        			res=res.substr(0,j);
        			break;
				}
			}
		}
		return res;
    }
};

int main(){
	Solution solution;
	vector<string> strs={"abcde","abcdr","abctt"};
	cout<<solution.longestCommonPrefix(strs)<<endl;
	return 0;
}

