#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s;
    cin >> n;
    s += ',';
    int i = 0, lens = s.size(), pos;
    vector<int> ivec, svec;
    //set<int> iset;
    for (int i = 0; i < lens; ++i)
    {
        pos = s.find(',', i);
        if (pos < lens)
        {
            ivec.push_back(atoi(s.substr(i, pos - i + 1).c_str()));
            i = pos;
        }
    }
    for (auto ii : ivec)
        cout << ii << " ";
    cout << endl;
    // int lenv=ivec.size()
    for (int i = 0; i < ivec.size(); ++i)
    {
        sort(svec.begin(), svec.end());
        for (auto ii : svec)
            cout << ii << " ";
        cout << endl;
        if (svec.size() < n)
        {
            svec.push_back(ivec[i]);
            continue;
        }
        if (svec[0] < ivec[i])
        {
            svec[0] = ivec[i];
        }
    }
    sort(svec.begin(), svec.end());
    int res = 0;
    for (int i = 0; i < ivec.size(); ++i)
    {
        if (svec[0] == ivec[i])
            res = i;
    }
    cout << res + 1 << endl;
    system("pause");
    return 0;
}
