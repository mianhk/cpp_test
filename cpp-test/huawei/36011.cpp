#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
   int n;
   while(cin>>n){
       int l1=0,l2=0,h1=0,h2=0;
       int temp1,tem2;
       cin>>temp1>>temp2;
       if(temp1<l1)
            l1=temp1;
        if(temp1>l2)
            l2=temp1;
        if(temp2<h1)
            h1=temp2;
        if(temp2>h2)
            h2=temp2;
        cout<<(h2-h1)*(l2-l1)<<endl;
   } 
 system("pause");
 return 0;

}