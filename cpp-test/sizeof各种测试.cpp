#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class A
{
    char c;
    int a;
    short sh;
};
class B
{
    char c;
    int a;
    short sh;
    void fun1();
    virtual void fun();
};
int main(int argc, char const *argv[])
{
    //A对齐，大小为12
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    system("pause");
    return 0;
}
