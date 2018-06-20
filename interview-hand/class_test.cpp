#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// The MIT License (MIT)

// Copyright (c) 2018 mianhk

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */

class A
{
  public:
    A(int num) : num(num) {}
    virtual func(int i)
    {
        cout << ++i << endl;
    }
    virtual ppnum()
    {
        cout << ++num << endl;
    }
    virtual ~A()
    {
        delete[] a;
    }

    int num;
    int a[3];

  private:
};

class B : public A
{
  public:
    B(int num) : num(num) {}
    func(int s)
    {
        cout << --s << endl;
    }
    ~B()
    {
        delete[] b;
    }
    int num;
    int b[3];

  private:
};
A a(3);
int main(int argc, char const *argv[])
{
    A a(3);
    B b(4);
    b.ppnum();
    a.ppnum();
    system("pause");
    return 0;
}
