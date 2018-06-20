#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//写程序判断大端小端
int main(int argc, char const *argv[])
{
    int i = 0x12345678;
    // char *p = (char *)&i;
    if (*((char *)&i) == 0x12)
        cout << "big" << endl;
    else if ()
        cout << "small" << endl;
    system("pause");
    return 0;
}
