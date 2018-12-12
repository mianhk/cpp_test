#include "Rules.h"

class Student : private Rules
{
  private:
    _uint64_t number;                           // 不确定数字的值有多大，就写个尽量较大的
    Student(const Student &rhs) = 0;            //student的复制没有意义，所以直接关掉
    Student &operator=(const Student &rhs) = 0; //同上
  public:
    Student(_uint64_t num);
    void set(_uint64_t new_number);
    _uint64_t get();
    void say();
    ~Student();
};
