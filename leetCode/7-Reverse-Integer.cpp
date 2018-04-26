#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Solution1{
public:
    int reverse(int x) {
        string s=to_string(x);
        int i=0,j=s.length()-1,flag=0;
        if(s[i]=='-'){
        	i++;
		}
       while(j>=i){
       	if(s[j]!='0'){
       		char temp=s[j];
       		s[j]=s[i];
       		s[i]=temp;
       		i++;
		   }
		   else{
		   	flag=j;
		   }
       		j--;	
	   }
//	   cout<<s<<endl;
	int res=stoi(s.substr(0,flag));
		return res;
        
    }
};

class Solution{
public:
    int reverse(int x) {
        int res=0;
        while(x!=0){
        	int tail=x%10;
        	res=res*10+tail;
//        	if((newRes-tail)/10!=res)
//        		return 0;
//        	res=newRes;
        	x=x/10;
		}
    return res;
    }
};
int main(){
	Solution solution;
	cout<<solution.reverse(123)<<endl;
	return 0;
}
