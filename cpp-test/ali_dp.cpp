#include <iostream>
#include <fstream>
#include <vector>


int main(){
    fstream file("./ali_test.txt");
    int n,k,temp;
    file>>n>>k;
    vector<int> nums[n];
    for(int i=0;i<n;++i){
        file>>nums[i];
    }
    for(int i=n-1;i>=0;--i){
        
        
    }
}
