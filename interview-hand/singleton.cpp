#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//单例模式

class Singleton
{
  private:
    Singleton() : num(0) {}
    static Singleton *pInstance;
    int num;

  public:
    static Singleton *getInstance()
    {
        if (pInstance == nullptr)
            pInstance = new Singleton();
        return pInstance;
    }
    int getNum()
    {
        return num;
    }
};
int main(int argc, char const *argv[])
{
    Singleton *p1 = Singleton::getInstance();
    cout << p1->getNum() << endl;
    system("pause");
    return 0;
}
