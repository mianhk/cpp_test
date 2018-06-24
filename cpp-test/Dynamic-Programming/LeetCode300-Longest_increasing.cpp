#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* 给定一个整数序列，求其中最长上升子序列的长度 */
class Solution{
    public:
        int lengthOfLis(vector<int>& nums){
            if(nums.empty())
                return 0;
            
            vector<int> memo(nums.size(),1);
            for(int i=1;i<nums.size();++i)
                for(int j=0;j<i;++j)
                    if(nums[j]<nums[i])
                        memo[i]=max(memo[i],1+memo[j]);
                        
            int res=1;
            for(int i=0;i<memo.size();++i)
                if(res<memo[i])
                    res=memo[i];
                    
            return res;
        }
}
int main(int argc, char const *argv[])
{
 system("pause");
 return 0;

}
