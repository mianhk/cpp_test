/*************************************************************************
	> File Name: test-rightvalue.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Apr 2018 10:52:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int valb=10;
    int &val(valb+1);
    
    cout<<"valb: "<<valb<<" valb address: "<<&valb<<endl;
    cout<<"val right: "<<val<<" val address: "<<&val<<endl;
    cout<<"val right: "<<val<<" val address: "<<&val<<endl;
}
