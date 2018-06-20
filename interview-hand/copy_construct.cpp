#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class A
{
public:
  A(int aa) : a(aa)
  {
    cout << "para construct." << endl;
  }                                                    //构造函数
  A() : a(0) { cout << "no para construct." << endl; } //无参构造函数
  A(const A &rhs)
  {
    cout << "copy construct." << endl;
    this->a = rhs.a;
  } //拷贝构造函数
  //拷贝赋值运算符
  //移动赋值运算符
  A &operator=(const A &rhs)
  {
    cout << "move operator=" << endl;
    this->a = rhs.a;
    return *this;
  }
  //析构函数
  virtual ~A() { cout << "destory A" << endl; }
  int getA()
  {
    return a;
  }
  void setA(int aa)
  {
    a = aa;
  }
  virtual void duotai()
  {
    cout << "wo shi A." << endl;
  }

private:
  int a;
  const static int p = 0;
};
class B : public A
{
public:
  void duotai()
  {
    cout << "wo shi B." << endl;
  }
};
void print(A a)
{
  cout << "print no yinyong" << endl;
}
void print1(const A &a)
{
  cout << "print with yinyong" << endl;
}
int main(int argc, char const *argv[])
{
  A a;
  A b(3);
  A c(b);
  cout << a.getA() << endl;
  cout << b.getA() << endl;
  cout << c.getA() << endl;

  print(a);
  print1(a);

  // B bb = a;
  // bb.duotai();
  //数组和指针的区别
  char a[] = "hello";
  a[0] = 'l';
  char *p = "world";
  p[0] = 't';
  system("pause");
  return 0;
}
