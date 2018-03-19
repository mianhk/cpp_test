#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<cstring>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(0==length)
            return;
        int space_num=0,i=0;
        while(i<length){
            if(' '==*str)
                ++space_num;
            str++;++i;
        }
        i+=space_num*3;
        
        char *new_str=str+space_num*3;
        while(new_str!='\0')
        	cout<<*new_str++<<endl;
        cout<<"i: "<<i<<endl;
        while(new_str!=str){
        	cout<<"i: "<<i<<endl;
            if(' '!=*str){
            	cout<<"dsdasdsdasdasd"<<endl;
            	
                *new_str=*str;
                cout<<*str<<endl;
            	cout<<*new_str<<endl;
            }
            else{
                *new_str--='0';
                *new_str--='2';
                *new_str--='%';
            }
            --new_str;--str;
			//--i;
        }
	}
};

int main(){
	Solution solution;
	char *str="ksi hsjkdhak sjdklaj ds";
	int length=strlen(str);
	solution.replaceSpace(str,length);
	cout<<length<<endl;
	return 0;
}

