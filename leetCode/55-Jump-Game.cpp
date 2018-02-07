#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	
    bool canJump(vector<int>& nums) {
        int i=0;
        for(int reach=0;i<nums.size()&&i<=reach;++i)
        	reach=max(i+nums[i],reach);
        return i==nums.size();
    }
};
int main(){
	Solution solution;
	vector<int> nums={2,3,1,1,4};
	cout<<solution.canJump(nums)<<endl;
	return 0;
}

