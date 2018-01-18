#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
        	target-=nums[i];
        	int front=i+1,end=nums.size()-1;
        	
		}
    }
};

int main(){
	Solution solution;
	vector<int> nums={0,0,0,0};
	return 0;
}

