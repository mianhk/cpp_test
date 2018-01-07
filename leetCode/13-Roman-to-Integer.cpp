#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> charToInt = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
        int i=s.length()-1;
        int res=0;
        int preval=0;
        while(i>=0){
        	char c=s[i];
        	int cur=charToInt[c];
        	if(res>re)
        	res+=cur;
		}
		return res;  VM-95-58-ubuntu
    }
};

int main(){
	Solution solution;
	cout<<solution.romanToInt("IIIVXLCII")<<endl;
	return 0;
}
