#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, res = 0;
    cin >> n;
    vector<int> ivec(n, 0);
    vector<bool> mark(n, false);
    for (int i = 0; i < n; ++i)
        cin >> ivec[i];
    int lastNum = n;
    while (true)
    {
        int last = ivec[0];
        for (int i = 1; i < ivec.size(); ++i)
        {
            if (mark[i])
                continue;
            if (last > ivec[i])
            {
                mark[i] = true;
                n--;
                last = ivec[i];
            }
            else
            {
                last = ivec[i];
            }
        }
        if (lastNum == n)
            break;
        res++;
        lastNum = n;
    }
    cout << res << endl;
    //system("pause");
    return 0;
}
