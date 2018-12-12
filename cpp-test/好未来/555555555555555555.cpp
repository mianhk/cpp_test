#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int pos = 0, res = -1;
        vector<int> ivec;
        for (int i = 0; i < str.size();)
        {
            pos = str.find(' ', i);
            if (pos < str.size())
            {
                ivec.push_back(atoi(str.substr(i, pos - i).c_str()));
                i = pos;
            }
        }
        for (auto ii : ivec)
            cout << ii << " ";
        cout << endl;
        vector<int> dp(ivec.size(), 0);
        for (int i = 0; i < ivec.size(); ++i)
        {
            dp[i] = ivec[i];
            res = max(res, dp[i]);
            for (int j = 0; j < i; ++j)
            {
                if (ivec[i] > ivec[j])
                {
                    dp[i] = max(dp[i], ivec[i] + dp[j]);
                    res = max(res, dp[i]);
                }
            }
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
