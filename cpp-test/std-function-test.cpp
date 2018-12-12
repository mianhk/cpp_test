#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
std::function<int(int)> functional;
//普通函数
int func1(int i)
{
    return i;
}
//lambda表达式
auto lambda = [](int a) -> int { return a; };

//仿函数
class Function
{
  public:
    int operator()(int a)
    {
        return a;
    }
};
int main(int argc, char const *argv[])
{
    functional = func1;
    cout << "putong hanshu ：" << functional(12) << endl;
    functional = lambda;
    cout << "lambda hanshu ：" << functional(20) << endl;
    Function f;
    functional = f;
    cout << "function hanshu ：" << functional(30) << endl;

    system("pause");
    return 0;
}
