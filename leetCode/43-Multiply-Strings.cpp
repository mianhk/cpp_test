#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        string sum(num1.size()+num2.size(),'0');
        for(int i=num1.size()-1;i>=0;--i){
        	int carry=0;
        	for(int j=num2.size()-1;j>=0;--j){
        		int temp=(sum[i+j+1]-'0')+(num1[i]-'0')*(num2[j]-'0')+carry;
        		sum[i+j+1]=temp%10+'0';
        		carry=temp/10;
			}
			sum[i]+=carry;
		}
		
		auto startpos=sum.find_first_not_of("0");
		if(startpos!=sum.size()){
			return sum.substr(startpos);
		}
		return "0";
    }
    string multiply1(string num1, string num2) {
    	string sum(num1.size() + num2.size(), '0');
    
    	for (int i = num1.size() - 1; 0 <= i; --i) {
        	int carry = 0;
        for (int j = num2.size() - 1; 0 <= j; --j) {
            int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
            sum[i + j + 1] = tmp % 10 + '0';
            carry = tmp / 10;
        }
        sum[i] += carry;
    }
    
    size_t startpos = sum.find_first_not_of("0");
    if (string::npos != startpos) {
        return sum.substr(startpos);
    }
    return "0";
}
};

int main(){
	Solution solution;
	string num1="123";
	string num2="22";
	string sum=solution.multiply(num1,num2);
	cout<<sum<<endl;
	return 0;
}

