#include <iostream>
#include <algorithm>
using namespace std;
/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<=0)
            return res;
        sort(nums.begin(),nums.end());
//        for(auto ii:nums)
//        	cout<<ii<<" ";
//        cout<<endl;
        for(int i=0;i<nums.size()&&nums[i]<=0;++i){
//        	cout<<"i: "<<i<<endl;
			int j=i+1,k=nums.size()-1;
            while(j<k){
//            	cout<<j<<endl;
//                	cout<<"k: "<<k<<endl;
					if(nums[i]+nums[j]+nums[k]<0)
						j++;
					else if(nums[i]+nums[j]+nums[k]>0)
						--k;
                    else if(nums[i]+nums[j]+nums[k]==0){
                    	vector<int> temp(3,0);
//                    	cout<<"i: "<<i<<"j: "<<j<<"k: "<<k<<endl;
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[k];
                        res.push_back(temp);
                        while(k>j&&nums[k]==temp[2])
                        	k--;
                        while(k>j&&nums[j]==temp[1])
                        	j++;
                    }
                }  
 				while(i+1<nums.size()&&nums[i+1]==nums[i])
			  		i++;
            }
        return res;
    }
};

int main(){
	Solution solution;
//	vector<int> nums={-1,0,1,2,-1,-4};
vector<int> nums={0,0,0,0};
	//[0,0,0]
	vector<vector<int>> res=solution.threeSum(nums);
	vector<int> temp;
	for(auto temp:res){
		for(auto t:temp){
			cout<<t<<" ";
		}
		cout<<endl;
	}
	return 0;
}

