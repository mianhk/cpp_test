#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*
*/
vector<vector<int> > FindContinuousSequence(int sum) {
	//queue<int> ique;
	vector<vector<int>> result;
	int l=1,r=1;
	int res=1;
	while(l<=r&&r<(sum+1)/2){
		r++;
		res+=r;
		while(res>sum){
			res-=l;
			l++;
		}
		if(res==sum&&l!=r){
			vector<int> tmp;
			for(int i=l;i<=r;i++) tmp.push_back(i);
			result.push_back(tmp);
		}
	}		
	return result;   
}
    
int main(){
	vector<vector<int>> result=FindContinuousSequence(9);
	for(int i=0;i!=result.size();++i){
		for(auto ii:result[i]){
			cout<<ii<<" ";
		}
		cout<<endl;
	}
	return 0;
}
