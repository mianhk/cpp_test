#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    /* //输入测试
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    // cout << a << " " << b << " " << c << endl;
    int temp1, temp2, temp3;
    temp1 = a ^ b;
    temp2 = b ^ c;
    temp3 = a ^ c;
    if (c ^ temp1 == 0)
        cout << "1" << endl;
    else
    {
        if (c - temp1 > 0)
        {
            cout << "C," << c - temp1 << endl;
        }
        else if (a - temp2 > 0)
            cout << "A," << a - temp2 << endl;
        else if (b - temp3 > 0)
            cout << "B," << b - temp3 << endl;
    } */
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    printf("%d, %d", *(a + 1), *(ptr - 1));
    system("pause");
    return 0;
}
