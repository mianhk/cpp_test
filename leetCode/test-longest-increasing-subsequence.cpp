#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longest_increasing_subsequence(vector<int> ivec){
		vector<int> res(ivec.size(),0);
		int len=1;
		for(int i=0;i<ivec.size();++i){
			res[i]=1;
			for(int j=0;j<i;++j)
				if(ivec[i]>=ivec[j]&&res[j]+1>res[i])
					res[i]=res[j]+1;
			if(res[i]>len)
				len=res[i];
		}
		return len;
    }
};

int main(){
	Solution solution;
	vector<int> ivec={5,3,4,8,6,7};
	cout<<solution.longest_increasing_subsequence(ivec)<<endl;
	return 0;
}

