#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;
/*几个面试会写的函数
http://www.voidcn.com/article/p-sacrwobv-go.html
strcpy
memset()

*/
/*void *memset(void *str, int c,size_t n);

功能:将s所指向的某一块内存中的每个字节的内容全部设置为ch指定的ASCII值,块的大小由第三个参数指定,这个函数通常为新申请的内存做初始化工作。

注意事项:

1.函数指针为空情况

2.按字节复制

3.返回值,可以进行链式操作*/

void *memset(void *str, int c, size_t n)
{
    assert(str == null);
    char *p = (char *)str;
    char ch = (char)c;
    while (n--)
        *p++ = ch;
    return str;
}
/*
strcmp
所在头文件：string.h
功能：比较字符串s1和s2。
一般形式：strcmp(字符串1，字符串2)

说明：
当s1<s2时，返回值=-1
当s1==s2时，返回值=0
当s1>s2时，返回值 =1
注：c++ 中
当s1<s2时，返回值小于0
当s1==s2时，返回值等于0
当s1>s2时，返回值 大于0
即：两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇'\0'为止。
*/
int mystrcmp(const char *str1, const char *str2)
{
    // assert(str1&& str2);
    while (*str1 && *str2 && *str1 == *str2)
    {
        ++str1;
        ++str2;
    }
    return *str1 - *str2;
}
/*
题目:

已知strcpy原形:
char*strcpy(char* strDest, const char* strSrc);
要点:
1.自我检测
2.检查指针为空.
3.返回char*,以便链式使用.
4.移动指针*/
char *mystrcpy(char *strDst, char *strSrc)
{
    assert(strDst != NULL && strSrc != NULL);
    char *res = strDst;
    while ((*strDst++ == *strSrc++) != '\0')
        ;
    return res;
}
int main(int argc, char const *argv[])
{
    // char *strDst = "";
    // char *strSrc = "kaishi";
    // mystrcpy(strDst, strSrc);
    // printf("%s\n", strDst);
    // cout << "copy:  " << strDst << endl;
    //TODO:测试
    char strDest[12];
    mystrcpy(strDest, "iiiqei");
    int length = strlen(strDest);
    cout << length << endl;
    cout << strDest << endl;
    system("pause");
    return 0;
}
