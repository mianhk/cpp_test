#include <set>
#include <iostream>
#include <algorithm>

using namespace std;
//最小的K个数
 
vector<int> findKMin(vector<int> input,int k){
//??????????,??????
    vector<int> result;
    if(input.size()<=0||k==0)
        return result;
//    set<int> iset;
    vector<int>::iterator iter=input.begin();
    for(;iter!=input.end();++iter){
    	sort(result.begin(),result.end());
        if(result.size()<k)
            result.push_back(*iter);
        else if(*iter<*(result.end()-1)){
            result.pop_back();
            result.push_back(*iter);
        }
    }
//    for(set<int>::iterator siter=iset.begin();siter!=iset.end();++siter){
//        result.push_back(*siter);
//    }
    return result;
}

int main(){
	vector<int> ivec={4,5,1,6,2,7,3,8};
	vector<int> result;
	result=findKMin(ivec,4);
	for(auto ii:result)
		cout<<ii<< " ";
	cout<<endl;
	return 0;
}
