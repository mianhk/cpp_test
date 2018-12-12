#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t)
{
    int s_map[256] = {0};
    int t_map[256] = {0};
    int i;
    for (i = 0; i < s.size() && s_map[s[i]] == t_map[t[i]]; ++i)
    {
        s_map[s[i]] = t_map[t[i]] = i + 1;
    }
    return i == s.size();
}

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        cout << s << "  " << t << endl;
        if (isIsomorphic(s, t))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
