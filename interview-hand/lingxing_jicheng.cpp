#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//菱形继承

class A
{
  public:
    A(int a) : a(a) {}
    void printA() { cout << a << endl; }
    int a;
};

class B : public A
{
  public:
    void printB() { cout << a << endl; }
};
class C : public A
{
  public:
    void printB() { cout << a << endl; }
};
class D : public B, public C
{
};
int main(int argc, char const *argv[])
{
    D d;
    cout << sizeof(d) << endl;
    d.printB();
    system("pause");
    return 0;
}
