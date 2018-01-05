#include <iostream>
using namespace std;
/*
根据之前的数字的反转可以有些思路*/
class Solution {
public:
    bool isPalindrome(int x) {
        int res=0;
		int y=x;
		while(y!=0){
			res=res*10+y%10;
			y/=10;
		}
		return x>=0&&x==res;  //包含0 
    }
};

int main(){
	Solution solution;
	cout<<solution.isPalindrome(123)<<endl;
	cout<<solution.isPalindrome(121)<<endl;
	cout<<solution.isPalindrome(-2147447412)<<endl;
	return 0;
}
