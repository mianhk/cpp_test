#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int pos = 0, res = INT_MIN;
        vector<int> ivec;
        for (int i = 0; i < str.size(); ++i)
        {
            pos = str.find(' ', i);
            if (pos < str.size())
            {
                ivec.push_back(atoi(str.substr(i, pos - i).c_str()));
                i = pos;
            }
        }
        vector<int> dp(ivec.size(), 0);
        for (int i = 1; i < ivec.size(); ++i)
        {
            res = INT_MIN;
            for (int j = 0; j < i; ++j)
            {
                if (ivec[i] > ivec[j])
                    res = max(res, dp[j]);
            }
            dp[i] = res + ivec[i];
        }
        sort(dp.begin(), dp.end());
        cout << *dp.end() << endl;
    }
    return 0;
}
