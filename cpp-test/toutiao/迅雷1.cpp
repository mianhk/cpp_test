#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    int flag=0,res=0;
    for(int i=6;i>0;--i){
        if(a*i+b<0){
            res=(a*i+b*(7-i))*2+a*3;
            flag=1;
             break;
        }
        else if(i==2|| i==1){
            res=(a*i+b*(7-i))*2+a*i+b*(3-i);
            flag=1;
            break;
        }
    }
    cout<<res<<endl;
 system("pause");
 return 0;

}