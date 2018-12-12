#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

union {
    /* data */
    int i;
    char x[2];
} a;

int main(int argc, char const *argv[])
{
    // int j, k, l, m;
    // int i = (j = 4, k = 8, l = 16, m = 32);
    // printf("%d", i);
    a.x[0] = 10;
    a.x[1] = 1;
    printf("%d", a.i);
    cout << endl;
    system("pause");
    return 0;
}
