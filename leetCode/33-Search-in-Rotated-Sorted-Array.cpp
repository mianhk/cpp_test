#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
    	if(nums.size()==0)
    		return -1;
        int lo=0,hi=nums.size()-1;
        int mid=0;
        while(lo<hi){
        	int mid=(lo+hi)/2;
        	if(nums[mid]>nums[hi])
        		lo=mid+1;
        	else
        		hi=mid;
		}
		int rot=lo;
		lo=0;hi=nums.size()-1;
		while(lo<=hi){
			int mid=(lo+hi)/2;
			cout<<"mid  "<<mid<<"rot  "<<rot<<endl;
			int realmid=(mid+rot)%nums.size();
			cout<<realmid<<" "<<"mid  "<<mid<<nums[realmid]<<endl;
			if(nums[realmid]==target) return realmid;
			if(nums[realmid]<target) lo=mid+1;
			else hi=mid-1;
		}
		return -1;
    }
};

int main(){
	Solution solution;
//	vector<int> nums={4,5,6,7,0,1,2};
vector<int> nums={1,3};
	cout<<solution.search(nums,1)<<endl;
	return 0;
}

