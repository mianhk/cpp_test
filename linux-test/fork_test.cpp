/*************************************************************************
	> File Name: fork_test.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 15 Mar 2018 03:01:59 PM CST
 ************************************************************************/

#include<iostream>
#include<unistd.h>
#include <sys/types.h>
using namespace std;

int main(){
    
    int pid=1;
    int a=3,b=4;
    int sum1=0;
    for(int i=0;i<100;i++){
        pid=fork();
    if(pid==0){
        sum1++;
        a=300;
        b=400;
        //cout<<"a: "<<a<<" b: "<<b<<endl;
        //break; 
    }
    else if(pid>0){
        //cout<<"父程序的a: "<<a<<" b: "<<b<<endl;
        sum1++;
        cout<<"sum: "<<sum1<<endl;
        cout<<"我是父程序，我的pid是："<<getpid()<<endl;
        //break;
    }
        else{
            cout<<"已经不能再fork了"<<endl;
        }
    }

    if(0==pid){
        cout<<"我是子进程,我的pid是："<<getpid()<<endl;
        //cout<<"a: "<<a<<" b: "<<b<<endl;
        
        cout<<"sum: "<<sum1<<endl;
       return 0; 
    }
    


    return 0;
}
