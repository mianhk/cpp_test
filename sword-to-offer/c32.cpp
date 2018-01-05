#include <iostream>
#include <cmath>
using namespace std;

int findNumberOf1(int n){
	if(n<0)
		return 0;
	int high,low,curr,tmp,i=1;
	high=n;
	int total=0;
	while(!high){
		high=n/(int)pow(10,i);  //获取i的最高位
        tmp = n%(int)pow(10, i);
        curr = tmp/(int)pow(10, i-1);// ???i?
        low = tmp%(int)pow(10, i-1);// ???i????
        if(curr==1){
            total+= high*(int)pow(10, i-1)+low+1;
        }else if(curr<1){
            total+=high*(int)pow(10, i-1);
        }else{
            total+=(high+1)*(int)pow(10, i-1);
        }
        i++;
    }
    return total;    
	}


int main(){
	cout<<findNumberOf1(2050)<<endl;
	return 0;
}
