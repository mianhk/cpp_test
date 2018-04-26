#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int findMid(vector<int> numbers){
	sort(numbers.begin(),numbers.end());
    int i=*(numbers.begin()+(numbers.end()-numbers.begin())/2);
    vector<int>::iterator iter=numbers.begin();
    int num=0;
    for(;iter!=numbers.end();++iter){
        if(*iter==i){
            ++num;
            cout<<num<<" "<<endl;
        }
    }
    cout<<num<<" sdas"<<endl;
    cout<<numbers.size()<<endl;
    if(num>=numbers.size())
        return num;
    else
        return 0;		
}		

int main(){
	vector<int> ivec={1,2,3,2,2,2,5,4,2};
	cout<<findMid(ivec)<<endl;
	return 0;
}
