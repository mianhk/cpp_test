#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    bool IsContinuous( vector<int> numbers ) {
        sort(numbers.begin(),numbers.end());
        for(auto nn:numbers)
        	cout<<nn<<" ";
        cout<<endl;
        int zero_num=0;
        int space_num=0;
        int start=0;
        for(;start<numbers.size()-1;++start){
            if(numbers[start]==0)
                zero_num++;
            else if(numbers[start]!=numbers[start+1]-1)
                space_num+=numbers[start+1]-numbers[start]-1;
            else if(numbers[start]==numbers[start+1]){
            	cout<<"sdads"<<endl;
            	return false;
			}
                
        }
        cout<<zero_num<<" "<<space_num<<endl;
        return zero_num>=space_num?true:false;
    }
    
int main(){
	vector<int> numbers={1,2,0,4,0};
	cout<<IsContinuous(numbers)<<endl;
	return 0;
}
