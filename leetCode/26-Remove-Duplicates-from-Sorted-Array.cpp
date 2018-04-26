#include <iostream>
#include <vector>
using namespace std;
/*
Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the new length.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicate_num=0;
        for(int i=1;i<nums.size();++i){
            if(nums[i]!=nums[i-1]){
                ++duplicate_num;
            }
            else
                nums[i-duplicate_num]=nums[i];
        }
        nums.erase(nums.end()-duplicate_num,nums.end());
        return nums.size();
    }
    int removeDuplicates1(vector<int>& nums) {
    	if(nums.size()==0)
    		return 0;
		int count=1;
		int cur=nums[0];
		for(int i=1;i<=nums.size();++i){
			if(nums[i]!=cur){
				nums[count++]=nums[i];
				cur=nums[i];
			}
		}
		return count;
    }
};

int main(){
	Solution solution;
	vector<int> ivec={1,1,2};
	cout<<solution.removeDuplicates(ivec)<<endl;
	
	for(auto ii:ivec)
		cout<<ii<<" ";
	cout<<endl;
	return 0;
}

