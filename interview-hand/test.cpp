#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define OFFSET(s, m) size_t(&((s *)0)->m)

struct A
{
    int a;
    char t;
    double d;
};
class B{
    public:
        B(int aa):a(aa){cout<<"b constructed."<<endl;}
        int a;
};
int main(int argc, char const *argv[])
{
    // int i=
    cout<<OFFSET(A,a)<<endl;
    cout<<OFFSET(A,d)<<endl;
    cout<<sizeof(char)<<endl;
    char *p="abc";
    cout<<sizeof(p)<<endl;
    cout<<"--------------"<<endl;
    B* b=new B(3); 
    cout<<b->a<<endl;
    cout<<"----------------"<<endl;
    void * number=0;
    cout<<sizeof(&number)<<endl;
    //  system("pause");
    return 0;
}
