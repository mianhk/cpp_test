#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res={-1,-1};
        if(nums.size()<=0)
            return res;
        int lo=0,hi=nums.size()-1;
        while(lo<hi){  //???
            int mid=(lo+hi)/2;
            if(nums[mid]<target)   
                lo=mid+1;
            else
                hi=mid;
        }
        if((nums[lo]!=target)){
        	return res;
		}
		else
			res[0]=lo;
        hi=nums.size()-1;
        while(lo<hi){  //???
			int mid=(lo+hi)/2+1;
			if(nums[mid]>target)
				hi=mid-1;
			else
				lo=mid;
        }
        res[1]=hi;
        return res;
    }
};
int main(){
	Solution solution;
	vector<int> nums={5,7,7,8,8,10};
//	vector<int> nums={1,2,3};
	vector<int> res=solution.searchRange(nums,8);
	for(auto i:res)
		cout<<i<<" ";
	cout<<endl;
 	return 0;
}

