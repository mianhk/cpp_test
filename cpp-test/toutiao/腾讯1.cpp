#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

int lcm(int temp, int l)
{
    int res = temp / gcd(temp, l) * l;
    return res;
}

int main()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << n << endl;
        return 0;
    }
    // cout << lcm(3, 4) << endl;
    int i = 1, temp1 = 1, temp2 = n + 1;
    for (int j = 1; j <= n + 1; ++j)
        temp1 = lcm(temp1, j);

    int res = lcm(temp1, temp2);
    cout << "sjkldaj: " << res << endl;
    while (true)
    {
        temp1 = lcm(temp1, n + i), temp2 = lcm(temp2, n + i);
        cout << temp1 << ": " << temp2 << endl;
        if (temp1 == temp2)
        {
            cout << n + i << endl;
            system("pause");
            return 0;
        }
        i++;
    }
    system("pause");
    return 0;
}
