#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    	if(matrix.size()<=0)
    		return;
//        int row=matrix.size(),col=matrix[0].size();
		int a=0,b=matrix.size()-1;
		while(a<b){
			for(int i=0;i<(b-a);++i){
				swap(matrix[a][a+i],matrix[a+i][b]);
				swap(matrix[a][a+i],matrix[b][b-i]);
				swap(matrix[a][a+i],matrix[b-i][a]);
			}
			++a;--b;
		}
    }
};

int main(){
	Solution solution;
	vector<vector<int>> matrix;
	for(int i=0;i<3;++i){
		vector<int> temp={3*i+1,3*i+2,3*i+3};
		matrix.push_back(temp);
	}
	solution.rotate(matrix);
	for(vector<int> temp:matrix){
		for(auto t:temp)
			cout<<t<<" ";
		cout<<endl;
	}
	return 0;
}

