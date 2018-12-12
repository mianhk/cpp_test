#include <bits/stdc++.h>
using namespace std;

bool test(vector<vector<char>> &ivec, int i, int j)
{
    if (ivec[i][j] == 'C' || ivec[i][j] == 'M' || ivec[i][j] == 'Y')
    {
        return true;
    }
    return false;
}
int main()
{
    int x;
    unordered_map<string, char> imap;
    imap["CM"] = 'B';
    imap["MY"] = 'R';
    imap["CY"] = 'G';
    imap["CMY"] = 'b';
    cin >> x;
    vector<string> result;
    for (int u = 0; u < x + 1; ++u)
    {
        int n, k;
        cin >> n >> k;
        string res = "true";
        vector<vector<char>> ivec;
        for (int i = 0; i < n; ++i)
        {
            vector<char> temp(k);
            for (int j = 0; j < k; ++j)
                cin >> temp[j];
            ivec.push_back(temp);
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < k; ++j)
            {
                if (ivec[i][j] != 'C' && ivec[i][j] != 'M' && ivec[i][j] != 'Y')
                {
                    set<char> s;
                    string str;
                    if (i > 0 && test(ivec, i - 1, j))
                        s.insert(ivec[i - 1][j]);
                    if (j > 0 && test(ivec, i, j - 1))
                        s.insert(ivec[i][j - 1]);
                    if (i < n - 1 && test(ivec, i + 1, j))
                        s.insert(ivec[i + 1][j]);
                    if (j < k - 1 && test(ivec, i, j + 1))
                        s.insert(ivec[i][j + 1]);
                    for (auto ss : s)
                        str += ss;
                    //cout << "str:  " << str << endl;
                    if (imap[str] != ivec[i][j])
                        res = "false";
                }
            }
        }
        result.push_back(res);
    }
    for (auto r : result)
        cout << r << endl;
    // system("pause");
    return 0;
}
