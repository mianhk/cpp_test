#include <iostream>
using namespace std;
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
/*
Implement atoi to convert a string to an integer.
*/
class Solution {
public:
    int myAtoi(string str) {
    	int begin=-1;
    	bool f=false;
    	int flag=1;
    	long long int res=0;
        for(int i=0;i<str.length();++i){
//        	if(str[i]==' ')
//        		begin++;
        	if(str[i]=='-'||str[i]=='+'){
                if(begin!=-1)
                    return 0;
                begin=i;
        		flag=str[i]=='-'?-1:1;
			}
        	else if(str[i]>='0'&&str[i]<='9'){
        			begin=i;
//        		cout<<"str[i]: "<<str[i]<<endl;
        		res=res*10+str[i]-48;
        		cout<<"res: "<<res<<endl;
//        		cout<<INT_MIN<<endl;
        		if(res*flag>INT_MAX)
        			return INT_MAX;
        		if(res*flag<INT_MIN)
        			return INT_MIN;
			}
			else if(str[i]==' '){
				if(begin!=-1)
					return res*flag;
			}
			else
				return res*flag;
		}
		return res*flag;
    }
};

int main(){
	Solution solution;
//	string s="2147483648";
	string s="123  456";
	cout<<solution.myAtoi(s)<<endl;
	return 0;
}

