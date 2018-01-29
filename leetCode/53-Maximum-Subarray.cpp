#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0]=nums[0];
        int res=dp[0];
        for(int i=1;i<nums.size();++i){
        	dp[i]=nums[i]+(dp[i-1]>0?dp[i-1]:0);
        	res=max(dp[i],res);
		}
		return res;
    }
};

int main(){
	Solution solution;
	vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
	int res=solution.maxSubArray(nums);
	cout<<res<<endl;
	return 0;
}

