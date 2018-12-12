#include <bits/stdc++.h>
using namespace std;

class foo
{
  public:
    static char a[4];
    virtual int func(){};
};

class bar : public foo
{
  private:
    char *p;
};

char foo::a[4] = {4, 5, 6, 7};
char *p1 = foo::a + 2;
char *p2 = (char *)(&foo::a + 1);
int main(int argc, char const *argv[])
{
    cout << sizeof(foo) << endl;
    cout << sizeof(bar) << endl;
    cout << (int)(*(foo::a + 1)) << endl;
    cout << (int)*p1 << endl;
    cout << (int)*(p2 - 1) << endl;
    cout << (int)foo::a[p2 - p1] << endl;

    system("pause");
    return 0;
}
