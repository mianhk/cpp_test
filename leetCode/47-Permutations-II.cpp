#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        permuteUnique(nums,0,nums.size(),res);
        return res;
    }
    
    void permuteUnique(vector<int> nums,int begin,int end,vector<vector<int>>& res){
        if(begin==end-1){
            res.push_back(nums);
            return;
        }
        for(int i=begin;i<end;++i){
            if(i!=begin&&nums[i]==nums[begin]) 
                continue;
            swap(nums[i],nums[begin]);
            permuteUnique(nums,begin+1,end,res);
//            swap(nums[i],nums[begin]);
        }
//        return;
    }
    void recursion1(vector<int> num, int i, int j, vector<vector<int> > &res) {
        if (i == j-1) {
            res.push_back(num);
            return;
        }
        for (int k = i; k < j; k++) {
            if (i != k && num[i] == num[k]) continue;
            swap(num[i], num[k]);
            recursion1(num, i+1, j, res);
        }
    }
    vector<vector<int> > permuteUnique1(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> >res;
        recursion1(num, 0, num.size(), res);
        return res;
    }
};

int main(){
	Solution solution;
	vector<int> nums={2,2,1,1};
	vector<vector<int>> res=solution.permuteUnique(nums);
	for(vector<int> ivec:res){
		for(auto ii:ivec)
			cout<<ii<<" ";
		cout<<endl;
	}
	return 0;
}

