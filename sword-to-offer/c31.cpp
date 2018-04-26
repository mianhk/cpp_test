#include <iostream>
#include <vector>
using namespace std;

int findMaxSum(vector<int> ivec){
	if(ivec.size()==0)
		return 0;
		
	int curSum=0;
	int maxSum=ivec[0];
	for(int i=0;i!=ivec.size();++i){
		curSum+=ivec[i];
		if(curSum<ivec[i])
			curSum=ivec[i];
		if(maxSum<curSum)
			maxSum=curSum;
	}
	return maxSum;
}

int main(){
	vector<int> ivec={6,-3,-2,7,-15,1,2,2};
	cout<<findMaxSum(ivec)<<endl;
	
	return 0;
}
