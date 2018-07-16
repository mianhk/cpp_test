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
class B
{
  public:
    B(int aa) : a(aa) { cout << "b constructed." << endl; }
    int a;
};
static int t;
// void func(int *p)
// {
//     cout << *p << endl;
// }
int main(int argc, char const *argv[])
{
    // int i=
    //测试宏函数
    // cout<<OFFSET(A,a)<<endl;
    // cout<<OFFSET(A,d)<<endl;
    // cout<<sizeof(char)<<endl;
    // char *p="abc";
    // cout<<sizeof(p)<<endl;
    // cout<<"--------------"<<endl;
    // B* b=new B(3);
    // cout<<b->a<<endl;
    // cout<<"----------------"<<endl;
    // void * number=0;
    // cout<<sizeof(&number)<<endl;

    //测试数组指针
    int str[][10] = {{1, 2, 3, 0, 5, 5, 5, 5, 5, 5}, {4, 5, 6}};
    int *p = str[1];
    printf("%d\n", *(p + 12));
    printf("%d\n", *p);
    cout << str[4][0] << endl;
    int i;
    cout << "i: " << i << endl;
    cout << "t: " << t << endl;
    printf("i1:    %d\n", i);
    printf("t1: %d\n", t);
    cout << "------" << endl;
    int ister[10] = {1};
    for (int i = 0; i < 10; ++i)
        cout << ister[i] << endl;
    printf("ister[9]: %d\n", ister[9]);
    int *ii = ister;
    printf("p: %d\n", *(ii + 6));
    system("pause");
    return 0;
}
