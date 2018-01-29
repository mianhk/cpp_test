#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalNQueens(int n) {
        vector<int> rows(n),d1(2*n-1),d2(2*n-1);
        return find(n,n,0,rows,d1,d2);
    }
    
    int find(int n,int left,int i,vector<int>& rows,vector<int>& d1,vector<int>& d2){
    	if(left==0)
    		return 1;
    	int j,sum=0;
    	for(j=0;j<n;++j){
    		if(rows[j]||d1[i+j]||d2[n-1+i-j])
    			continue;
    		rows[j]=d1[i+j]=d2[n-1+i-j]=1;
    		sum+=find(n,left-1,i+1,rows,d1,d2);
    		rows[j]=d1[i+j]=d2[n-1+i-j]=0;
		}
		return sum;
	}
};

int main(){
	Solution solution;
	int res=solution.totalNQueens(8);
	cout<<res<<endl;
	return 0;
}

