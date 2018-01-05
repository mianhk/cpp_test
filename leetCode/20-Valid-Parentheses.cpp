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
        queue<int> ique;
        for(int i=0;i!=s.length();++i){
            switch(s[i]){
                case '(':ique.push(')');break;
                case '{':ique.push('}');break;
                case '[':ique.push(']');break;
                case ')':case '}':case ']':
                if(ique.empty()||ique.pop()!=s[i])
                    return false;
            }
        }
    }
};

