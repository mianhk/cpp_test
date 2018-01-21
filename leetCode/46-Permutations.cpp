#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		permute(nums,0,res);
		return res;
    }
    void permute(vector<int>& nums,int begin,vector<vector<int>>& res){
    	if(begin>=nums.size()){
    		res.push_back(nums)
    		return;
		}
		for(int i=begin;i<nums.size();++i){
			swap(nums[begin],nums[i]);
			permute(nums,begin+1,res);
			swap(nums[begin],nums[i]);
		}
		return;
	}
};

int main(){
	Solution solution;
	vector<int> nums={1,2,3};
	vector<vector<int>> res=solution.permute(nums);
	for(vector<int> ivec:res){
		for(auto ii:ivec)
			cout<<ii<<" ";
		cout<<end;
	}
	return 0;
}

