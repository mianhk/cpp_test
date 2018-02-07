#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
        if(obstacleGrid.size()==0||obstacleGrid[0].size()==0)
            return 1;
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<int> cur(n,1);
        for(int j=1;j<=m;++j){
            for(int i=1;i<=n;++i){
                if(obstacleGrid[j-1][i-1]==1)
                    cur[i]=0;
                else
                    cur[i]+=cur[i-1];
            }
        }
        return cur[n-1];
            
    }
};

int main(){
	Solution solution;
	vector<vector<int> > obstacleGrid={{1,0,0,0,0,0},{0,1,0,1,0,0}};
	int res=solution.uniquePathsWithObstacles(obstacleGrid);
	cout<<res<<endl;
	return 0;
}

