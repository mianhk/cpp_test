//测试c++中类的各种特性
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*全局对象初始化*/
class CTest
{
  public:
    CTest()
    {
        cout << "构造函数..." << endl;
    }
    ~CTest()
    {
        cout << "析构函数..." << endl;
    }
};
CTest t;
//inline func
inline string showAuthor()
{
    return "mianhk";
}

class Other
{

  private:
    int num = 0;
    Other() : num(0) {}
};
//定义的基类
class Base
{
  public:
    static int baseNum; //声明static 成员变量，但是不能在类内定义。

    // Base() : private_num(0) { cout << "Construct func." << endl; }                                //无参数的构造函数
    Base(int num) : private_num(num), private_reference_num(num) { cout << "Construct by arg." << endl; } //
    void setNum(int num);
    int getNum() { return private_num; }

    //定义static的成员函数
    static int getbaseNum()
    {
        return baseNum;
    }
    ~Base()
    {
        cout << "destoried func." << endl;
    }

  private:
    int private_num;
    int &private_reference_num;
};
void Base::setNum(int num)
{
    private_num = num;
}
int Base::baseNum = 0;
int main(int argc, char const *argv[])
{
    Base::baseNum = 10;
    // Base a;
    Base b(3);
    // cout << "a.num: " << a.getNum() << endl;
    cout << "b.num: " << b.getNum() << endl;
    b.setNum(10);
    cout << "b.num: " << b.getNum() << endl;
    cout << showAuthor() << endl; //测试inline函数
    cout << "test static class member: " << Base::baseNum << endl;
    cout << "print static member: " << Base::baseNum << endl;
    b.baseNum = 5;
    cout << "print static member: " << Base::getbaseNum() << endl;
    cout << "开始" << endl;
    cout<<20152015%2016<<endl;
    system("pause");
    return 0;
}
