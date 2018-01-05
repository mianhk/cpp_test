#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


vector<int> twoSum(vector<int> &nums,const int target){
	vector<int> res;
	map<int,int> temp;
	if(nums.size()<=0)
		return res;
	for(int i=0;i!=nums.size();++i){
		temp[nums[i]]=i;
	}
	for(int i=0;i!=nums.size();++i){
		int restval=target-nums[i];
		if(temp.find(restval)!=temp.end()){
			int index=temp[restval];
			if(index==i){
				continue;
			}
			else if(index<i){
				res.push_back(index);
				res.push_back(i);
				return res;
			}
			else{
				res.push_back(i);
				res.push_back(index);
				return res;
			}
			
		}
	}
	return res;
}

int main(){
	int target=6;
	vector<int> nums={3,2,4};
	vector<int> res;
	res=twoSum(nums,target);
	for(int ii:res)
	cout<<ii<<" ";
	cout<<endl;
	return 0;
}
