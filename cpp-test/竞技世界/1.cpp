#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int n = 0;
    cin >> n;
    for (int n = 100; n < n; n++)
    {
        x = n / 100;
        y = (n % 100) / 10;
        z = n % 10;

        if (n == x * x * x + y * y * y + z * z * z)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}
