#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//测试
class Shape // 形状类
{
  public:
    virtual double calcArea()
    {
        cout << "我是Shape中的calcArea" << endl;
    }
    virtual ~Shape()
    {
    }
};
class Circle : public Shape // 圆形类
{
  public:
    Circle(int r) : r(r) {}
    virtual double calcArea()
    {
        cout << "我是Circle 中的calcArea" << endl;
    }

  private:
    int r;
};
class Rect : public Shape // 矩形类
{
  public:
    Rect(int width, int hight) : width(width), hight(hight) {}
    virtual double calcArea()
    {
        cout << "我是Rect中的calcArea" << endl;
    }

  private:
    int width;
    int hight;
};
int main()
{
    Shape *shape1 = new Circle(4.0);
    Shape *shape2 = new Rect(5.0, 6.0);
    shape1->calcArea(); // 调用圆形类里面的方法
    shape2->calcArea(); // 调用矩形类里面的方法
    delete shape1;
    shape1 = nullptr;
    delete shape2;
    shape2 = nullptr;
    system("pause");
    return 0;
}
