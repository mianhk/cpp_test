#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin >> n >> m;
    vector<int> ivec1(m, 101), ivec2(m, -1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp--;
        if (ivec1[temp] > i)
            ivec1[temp] = i;
        if (ivec2[temp] < i)
            ivec2[temp] = i;
    }
    int qsum, i = 0, j = 0;
    cin >> qsum;
    vector<int> res(qsum, 0);
    for (int t = 0; t < qsum; ++t)
    {
        // int res=0;
        cin >> i >> j;
        for (int h = 0; h < m; ++h)
        {
            if (ivec1[h] < 101 && ivec1[h] >= i - 1)
                res[t]++;
            else if (ivec2[h] > -1 && ivec2[h] <= j - 1)
                res[t]++;
        }
        // cout<<res<<endl;
    }
    for (auto r : res)
        cout << r << endl;
    system("pause");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin >> n >> m;
    vector<int> ivec1(m, 101), ivec2(m, -1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp--;
        if (ivec1[temp] > i)
            ivec1[temp] = i;
        if (ivec2[temp] < i)
            ivec2[temp] = i;
    }
    int qsum, i = 0, j = 0;
    cin >> qsum;

    for (int t = 0; t < qsum; ++t)
    {
        int res = 0;
        cin >> i >> j;
        for (int h = 0; h < m; ++h)
        {
            if (ivec1[h] < 101 && ivec1[h] > i - 1)
                ++res;
            else if (ivec2[h] > -1 && ivec2[h] < j - 1)
                ++res;
        }
        cout << res << endl;
    }
    //system("pause");
    return 0;
