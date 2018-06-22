#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* 测试char 和指针 以及各种值的大小*/
int main(int argc, char const *argv[])
{
    // char a[10] = "abc\0yutio";
    // char *p = a;
    // printf("%s\n", *p);

    cout << "sizeof(int)" << sizeof(int) << endl;
    cout << "sizeof(char)" << sizeof(char) << endl;
    cout << "sizeof(double)"<< sizeof(double) << endl;
    cout << "sizeof(long)" << sizeof(long) << endl;
    
    char *c;
    cout << "sizeof pointer" << sizeof(c) << endl;
    system("pause");
    return 0;
}
