#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        vector<int> ivec(n, 0);
        int sum = 0, res = 0;
        double ave = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> ivec[i];
            sum += ivec[i];
        }
        ave = sum / n;
        int min1 = INT_MIN, max1 = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (ivec[i] > ave)
            {
                ivec[i] -= k;
            }
            else if (ivec[i] < ave)
            {
                ivec[i] += k;
            }
            min1 = max(min1, ivec[i]);
            max1 = min(max1, ivec[i]);
            cout << "min1:  " << min1 << "  max1:  " << max1 << endl;
        }
        res = max1 - min1;
        cout << res << endl;
    }
    system("pause");
    return 0;
}
