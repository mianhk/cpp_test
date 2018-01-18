#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum1(vector<int>& nums, int target) {
        vector<vector<int>> total;
        int n = nums.size();
        if(n<4)  return total;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                int left=j+1,right=n-1;
                while(left<right){
                    int sum=nums[left]+nums[right]+nums[i]+nums[j];
                    if(sum<target) left++;
                    else if(sum>target) right--;
                    else{
                    	cout<<right<<endl;
                        total.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        do{left++;}while(nums[left]==nums[left-1]&&left<right);
                        do{right--;}while(nums[right]==nums[right+1]&&left<right);
                    }
                }
            }
        }
        return total;
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n<4)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;++i){
            if(i>0&&nums[i]==nums[i-1]) continue;
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target) continue;
            for(int j=i+1;j<n-2;++j){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                int begin=j+1,end=n-1;
                while(begin<end){
                    int sum=nums[i]+nums[j]+nums[begin]+nums[end];
                    if(sum>target)
                        --end;
                    else if(sum<target)
                        ++begin;
                    else if(sum==target){
                    	
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[begin];
                        temp[3]=nums[end];
                        res.push_back(temp);
                        while(begin<end&&temp[2]==nums[begin])
                            ++begin;
                        while(begin<end&&temp[3]==nums[end])
                            --end;
//                         do{begin++;}while(nums[begin]==nums[begin-1]&&begin<end);
//                         do{end--;}while(nums[end]==nums[end+1]&&begin<end);
                    }
                }
            }
           
        }
         return res;
    }
};

int main(){
	Solution solution;
//	vector<int> nums={1,0,-1,0,-2,2};
	vector<int> nums={-1,0,1,2,-1,-4};
	int target=-1;
	vector<vector<int>> res=solution.fourSum(nums,target);
	vector<int> temp;
	for(auto temp:res){
		for(auto t:temp){
			cout<<t<<" ";
		}
		cout<<endl;
	}
	return 0;
}

