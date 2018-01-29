#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,multiset<string>> map_str;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            map_str[t].insert(s);
        }
        vector<vector<string>> res;
        for(auto temp:map_str){
            vector<string> vec_str_temp(temp.second.begin(),temp.second.end());
            res.push_back(vec_str_temp);
        }
        return res;
    }
};

int main(){
	Solution solution;
	return 0;
}

