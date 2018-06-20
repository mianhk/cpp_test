#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
/*实现一个自己的string类
https://blog.csdn.net/moxiaomomo/article/details/6411584
*/

class MyString
{
    friend ostream &operator<<(ostream &, MyString &); //重载>>
    friend istream &operator>>(istream &, MyString &); //重载<<
  public:
    //构造函数
    MyString(const char *str = NULL)
    {
        if (!str)
            m_data = 0;
        else
        {
            m_data = new char[strlen(str) + 1];
            strcpy(m_data, str);
        }
    }
    //拷贝构造函数
    MyString(const MyString &rhs)
    {
        if (!rhs.m_data)
            m_data = 0;
        else
        {
            m_data = new char(strlen(rhs.m_data) + 1);
            strcpy(m_data, rhs.m_data);
        }
    }
    //赋值运算符operator=
    MyString &operator=(const MyString &rhs)
    {
        if (this != &rhs)
        { //避免自赋值的情况
            delete[] m_data;
            if (!rhs.m_data)
                this->m_data = 0;
            else
            {
                m_data = new char(strlen(rhs.m_data) + 1);
                strcpy(m_data, rhs.m_data);
            }
        }
        return *this;
    }
    //operator+
    MyString operator+(const MyString &rhs)
    {
        MyString newString;
        if (!this->m_data)
            newString = rhs;
        else if (!rhs.m_data)
            newString = *this;
        else
        {
            newString.m_data = new char(strlen(this->m_data) + strlen(rhs.m_data) + 1);
            strcpy(newString.m_data, this->m_data);
            strcat(newString.m_data, rhs.m_data);
        }
        return newString;
    }
    //operator ==
    bool operator==(const MyString &rhs)
    {
        return strcmp(this->m_data, rhs.m_data) ? false : true;
    }
    //operator[]
    char operator[](unsigned int i)
    {
        if (i >= 0 && i < strlen(this->m_data))
            return m_data[i];
    }

    //析构函数
    ~MyString()
    {
        delete[] m_data;
    }

  private:
    char *m_data;
};

ostream &
operator<<(ostream &os, MyString &s)
{
    os << s.m_data;
    return os;
}
istream &
operator>>(istream &is, MyString &s)
{
    is >> s.m_data;
    return is;
}
int main(int argc, char const *argv[])
{
    MyString s1("Hello");
    MyString s2 = "Aha!";
    MyString s3 = s1 + s2;
    cout << s3 << endl;
    system("pause");
    return 0;
}
