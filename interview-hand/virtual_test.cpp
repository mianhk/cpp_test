#include <iostream>
using namespace std;
class A
{
    char a;

  public:
    virtual void aa(){};
};
class B : public virtual A
{
    char b;
    char a;

  public:
    virtual void bb(){};
    virtual void aa(){};
};
class D : public virtual A
{
    char d;
    char a;

  public:
    virtual void dd(){};
    virtual void aa(){};
};

class C : public virtual B, public virtual D
{
    char a;
    char b;
    char c;
    char d;

  public:
    virtual void cc(){};
    virtual void aa(){};
    virtual void bb(){};
    virtual void dd(){};
};
int main()
{
    cout << sizeof(A) << endl
         << sizeof(B) << endl
         << sizeof(D) << endl
         << sizeof(C);
         system("pause");
    return 0;
}
