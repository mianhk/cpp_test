/*************************************************************************
	> File Name: 20-Valid-Parentheses.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 05 Jan 2018 09:12:43 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
#include <queue>
using namespace std;
class Solution{
    public:
    bool isValid(string s){
        queue<char> ique;
        for(int i=0;i!=s.length();++i){
        	char c=s[i];
        	cout<<c<<endl;
            switch(c){
                case '(':ique.push(')');break;
                case '{':ique.push('}');break;
                case '[':ique.push(']');break;
                case ')':case '}':case ']':{
                	cout<<c<<endl;
                	cout<<ique.front()<<endl;
                	if(ique.empty()||(ique.front()!=c)){
                		cout<<"12312"<<endl;
                		return false;
					}
                	ique.pop();
					break;
				}
            }
        }
        return ique.empty();
    }
};

int main(){
	Solution solution;
	string str("([)]");
	cout<<solution.isValid(str)<<endl;
	return 0;
}


