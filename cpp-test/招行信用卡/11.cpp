#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int pos = 0;
        str += ' ';
        vector<int> ivec;

        for (int i = 0; i < str.size();)
        {
            pos = str.find(' ', i);
            if (pos < str.size())
            {
                ivec.push_back(atoi(str.substr(i, pos - i).c_str()));
                // cout << "ighwuiehqiuehq" << endl;
                i = pos + 1;
            }
        }

        for (auto ii : ivec)
            cout << ii << " ";
        cout << endl;
        int buy = INT_MIN, res = 0;

        for (int i = 0; i < ivec.size(); i++)
        {
            buy = max(buy, -ivec[i]);
            res = max(res, ivec[i] + buy);
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
