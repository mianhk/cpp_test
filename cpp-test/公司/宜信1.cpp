#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, w;
    cin >> n >> w;
    int res = 0;
    if (w < 2)
        cout << res << endl;
    else if (w == 2)
        cout << n << endl;
    else
    {
        res = (w - 1) * n * n * (w - 2) % 100003;
        cout << res << endl;
    }
    system("pause");
    return 0;
}
