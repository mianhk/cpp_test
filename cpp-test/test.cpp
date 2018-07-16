#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//在模板中，如何声明嵌套从属类型(即模板嵌套类型)
/* template<typename T>
void doSomething(const T& t){
  if(t.size()>=0)
    typename t::iterator iter(t.begin());   //根据C++的规则，编译器先假设C::iterator不是一个类型。然而iter的声明只有在C::iterator是一个类型时才合理。因此需要我们自己告诉编译器。
//那么，就需要再C::iterator之前加上typename，告诉编译器C::iterator是一个类型。
}
 */
/* class Empty
{
  //空类测试
public:
  Empty() {}
  virtual ~Empty() = 0;
};
class base1
{
private:
  int a, b;

public:
  base1(int i) : b(i + 1), a(b) {}
  base1() : b(0), a(b) {}
  int get_a() { return a; }
  int get_b() { return b; }
}; */

int main()
{
  // base1 obj1(11);
  /* cout << obj1.get_a() << endl
       << obj1.get_b() << endl;
  cout << "1111111111" << endl;
  cout << sizeof(Empty) << endl; */
  vector<int> ivec1 = {1, 2, 3};
  vector<int> ivec2 = {1, 2, 3};
  vector<int> ivec3 = {2, 1, 3};
  bool i1 = ivec1 == ivec2;
  cout << (ivec1 == ivec2) << endl;
  cout << (ivec3 == ivec2) << endl;
  cout << i1 << endl;
  system("pause");
  return 0;
}
