#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        int count = 0, temp = 0;
        int k = i;
        while (k > 0)
        {
            temp = k & 7;
            if (temp >= 7)
                count = 1;
            k = k >> 1;
            // cout << k << endl;
        }
        if (count != 1)
        {
            // cout << i << endl;
            res++;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}
