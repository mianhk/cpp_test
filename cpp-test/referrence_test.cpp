#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//operator=返回一个reference to *this

class Widget
{
  private:
    int i;

  public:
    Widget(int ii) : i(ii) {}
    Widget &operator=(const Widget &rhs)
    {
        this->setValue(rhs.getValue());
        cout << "assign" << endl;
        return *this;
    }
    Widget(const Widget &rhs)
    {
        i = rhs.i;
        cout << "copy" << endl;
    }
    Widget &operator+=(const Widget &rhs)
    {
        this->setValue(this->getValue() + rhs.getValue());
        return *this;
    }

    void setValue(int ii)
    {
        i = ii;
    }
    int getValue() { return i; }
};

//当给reference s重新赋值时，s1的值也被改变了，所以C++规定reference一旦初始化之后，就不能改变

int main(int argc, char const *argv[])
{
    string s1 = "aa";
    string s2 = "bb";
    string &s = s1;
    s = s2;

    cout << s << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << "test poerator=  " << endl;
    Widget w1(1), w2(2), w3(3);
    w1 = w2;
    system("pause");
    return 0;
}
