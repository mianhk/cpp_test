/*************************************************************************
	> File Name: fork2.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 15 Mar 2018 08:12:09 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <unistd.h>  
#include <sys/types.h> 

int main(){
        int pid=1;
        pid=fork();
        if(0==pid){ //pid为0，表示为子进程
                          cout<<"我是子进程，我的pid是："<<getpid()<<endl;
                      }
        else if(pid>0){ //pid>0表示父进程，此时返回值为子进程的pid
                              cout<<"我是父进程，我的pid是"<<getpid()<<endl;
                          }
        else {  //fork 失败
                     cout<<"fork失败"<<endl;
                 }

}
