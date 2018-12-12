#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m;
    while (cin >> n >> m)
    {
        double res, temp_res;
        vector<double> ivec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ivec[i];
            temp_res += ivec[i];
        }
        res = temp_res / (n - m);
        printf("%.2f\n", res);
    }
    system("pause");
    return 0;
}
