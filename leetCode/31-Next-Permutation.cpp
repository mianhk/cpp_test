#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        for(int i=nums.size()-2;i>k;--i){
        	if(nums[i]>nums[i+1]){
        		k=i;
        		break;
			}
		}
		if(k==-1){
			reverse(nums.begin(),nums.end());
			return;
		}
		int l=0;
		for(int i=nums.size()-1;i>k;--i){
			if(nums[i]>nums[k]){
				l=i;
				break;
			}
		}
		swap(nums[l],nums[k]);
		reverse(nums.begin()+k+1,nums.end());
    }
};
int main(){
	Solution solution;
	
	return 0;
}

