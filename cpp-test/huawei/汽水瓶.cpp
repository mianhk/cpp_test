#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0;
    while (cin >> n)
    {
        res = 0;
        if (!n)
            break;
        if (n <= 2)
            cout << "0" << endl;
        while (n > 2)
        {
            res += n / 3;
            n = n / 3 + n % 3;
        }
        if (n == 2)
            res++;
        cout << res << endl;
    }
    system("pause");
    return 0;
}
