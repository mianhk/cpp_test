#include <bits/stdc++.h>
using namespace std;

int res(vector<int> &ivec, int sum)
{
    int cursum = 0;
    for (auto ii : ivec)
        cursum += ii;
    if (cursum >= sum)
        return 0;
    else
    {
        for (int k = 0; k < ivec.size(); ++k)
        {
            int d = 100 - ivec[k];
            cursum += d;
            if (cursum >= sum)
            {
                return k + 1;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, x, sum = 0;
        cin >> n >> x;
        sum = n * x;
        vector<int> ivec(n, 0);
        for (int j = 0; j < n; ++j)
        {
            cin >> ivec[j];
        }

        sort(ivec.begin(), ivec.end());
        cout << res(ivec, sum) << endl;
    }
    //  system("pause");
    return 0;
}
