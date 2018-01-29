#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	    bool isValid1(vector<string>& queen, int row,int col,int n){
        for(int i=0;i<row;++i){
			if(queen[i][col]=='Q')
				return false;
		}
        for(int i=row-1,j=col-1;i>=0&&j>=0;--i,--j){
            if(queen[i][j]=='Q')
                return false;
        }
        for(int i=row-1,j=col+1;i>=0&&j<n;--i,++j){
            if(queen[i][j]=='Q')
                return false;
        }
        return true;
    }
	bool isValid(vector<string>& queen,int row,int col,int n){
		for(int i=0;i<row;++i){
			if(queen[i][col]=='Q')
				return false;
		}
		for(int i=row-1,j=col-1;i>=0&&j>=0;--i,--j){
			if(queen[i][j]=='Q')
				return false;
		}
		for(int i=row-1,j=col+1;i>=0&&j<n;--i,++j){
			if(queen[i][j]=='Q')
				return false;
		}
		return true;
	}
	void recurse(vector<string>& queen,vector<vector<string>>& res,int row,int n){
		if(row==n){
			res.push_back(queen);
			return;
		}
		for(int col=0;col!=n;++col){
			if(isValid1(queen,row,col,n)){
				queen[row][col]='Q';
				recurse(queen,res,row+1,n);
				queen[row][col]='.';
			}
		}
		return;
	}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> queen(n,string(n,'.'));
        recurse(queen,res,0,n);
        return res;
    }
};

int main(){
	Solution solution;
	vector<vector<string>> ivec;
	ivec=solution.solveNQueens(4);
	for(vector<string> temp:ivec){
		for(auto t:temp)
			cout<<t<<endl;
		cout<<endl;
	}
	return 0;
}

