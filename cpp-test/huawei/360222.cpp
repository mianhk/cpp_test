#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin >> n >> m;
    vector<int> ivec(n + 1, 0);
    for (int s = 1; s <= n; s++)
    {
        cin >> ivec[s];
    }
    int qsum, i = 0, j = 0;
    cin >> qsum;
    for (int t = 0; t < qsum; ++t)
    {
        unordered_set<int> iset;
        cin >> i >> j;
        for (int k = i; k <= j; ++k)
        {
            iset.insert(ivec[k]);
        }
        int res = iset.size();
        cout << res << endl;
    }
    system("pause");
    return 0;
}
