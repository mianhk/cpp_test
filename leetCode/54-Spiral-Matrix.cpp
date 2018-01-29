#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> dirs{{0,1},{1,0},{0,-1},{-1,0}};
        vector<int> res;
        int nr=matrix.size();
        if(nr==0)
        	return res;
        int nc=matrix[0].size();
        
        vector<int> nSteps{nc,nr-1};
        
        int iDir=0;
        int ir=0,ic=-1;
        while(nSteps[iDir%2]){
        	for(int i=0;i<nSteps[iDir%2];++i){
        		ir+=dirs[iDir][0];
        		ic+=dirs[iDir][1];
        		res.push_back(matrix[ir][ic]);
			}
			nSteps[iDir%2]--;
			iDir=(iDir+1)%4;
		}
		return res;
	
	}
};

int main(){
	Solution solution;
	vector<vector<int>> matrix;
	for(int i=0;i<3;++i){
		vector<int> temp={3*i+1,3*i+2,3*i+3};
		matrix.push_back(temp);
	}
	vector<int> res=solution.spiralOrder(matrix);
	for(auto r:res)
		cout<<r<<" ";
	cout<<endl;
//	for(vector<string> temp:ivec){
//		for(auto t:temp)
//			cout<<t<<endl;
//		cout<<endl;
//	}
	return 0;
}

