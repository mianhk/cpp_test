#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	string getPermutation(int n, int k) {
		if(n<=0)
    		return "";
        string s(n,'0');
        int i,j,f=1;
        for(i=1;i<=n;++i){
        	f*=i;
        	s[i-1]+=i;
		}
		for(i=0,k--;i<n;i++){
			f/=n-i;
			j=i+k/f;
			cout<<"i: "<<i<<" k:"<<k<<" f:"<<f<<" j:"<<f<<endl;
			char c=s[j];
			for(;j>i;j--)
				s[j]=s[j-1];
			k%=f;
			s[i]=c;
		}
		return s;
	}
//    string getPermutation1(int n, int k,vector<string>& res) {
//    	if(n<=0)
//    		return "";
////    	const int size=n;
//        string str(n,'0');
//        for(int i=0;i<n;++i){
//        	cout<<i<<endl;
//        	str[i]+=i;
//		}
//		cout<<"str"<<endl;
//		cout<<str<<endl;
////		vector<string> svec;
//		permutation(res,str,0,n,0,k);
//		return str;
//    }
//    void permutation(vector<string>& res,string& str,int begin,int n,int num,int& k){
//    	if(begin==n){
//    		res.push_back(str);
//    		return;
//		}
//		for(int j=begin;j<n;++j){
//			swap(str[begin],str[j]);
//			permutation(res,str,begin+1,n,num,k);
//			swap(str[begin],str[j]);
//		}
//	}
};

int main(){
	Solution solution;
	string str;
	str=solution.getPermutation(3,2);
	cout<<str<<endl;
	return 0;
}

