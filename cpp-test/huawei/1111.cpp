#include <bits/stdc++.h>
using namespace std;

int main()
{
    double res1 = 0, res2 = 0, res;
    int count;
    double price;
    while (cin >> count >> price)
    {
        if (count <= 0 || count >= 10000 || price <= 0 || price > 10000)
            break;
        if (count > 3)
            res1 = count * price * 0.7;
        if (res1 < 50)
            res1 += 10;
        res1 = ceil(res1 * 100 + 0.5) / 100;
        cout << res1 << endl;
        res2 = count * price;
        if (res2 > 10)
            res2 -= 2;
        if (res2 < 99)
            res += 6;
        res2 = ceil(res2 * 100 + 0.5) / 100;
        cout << res2 << endl;
        res1 = 2.53;
        res2 = 2.54;
        if (res1 == res2)
            cout << "0" << endl;
        else if (res1 > res2)
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}
