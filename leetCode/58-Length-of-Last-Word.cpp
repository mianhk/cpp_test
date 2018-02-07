#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0)
            return 0;
        for(int i=s.length()-1;i>0;--i){
            if(s[i]==' ')
                return s.length()-i-1;
        }
        return s.length();
    }
    int lengthOfLastWord1(string s){
    	int len=0,tail=s.length()-1;
    	while(tail>=0&&s[tail]==' ') tail--;
    	while(tail>=0&&s[tail]!=' '){
    		len++;
    		tail--;
		}
		return len;
	}
};
int main(){
	Solution solution;
	string s=" ";
	cout<<s.length()<<endl;
	cout<<solution.lengthOfLastWord1(s)<<endl;
	return 0;
}

