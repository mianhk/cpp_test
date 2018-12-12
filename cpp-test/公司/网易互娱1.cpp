#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    vector<string> svec(t);
    for (int i = 0; i < t; ++i)
        cin >> svec[i];
    for (int i = 0; i < t; ++i)
        cout << svec[i] << endl;
    ;
    for (int k = 0; k < t; ++k)
    {
        cout << "dsasd: " << k << endl;
        string s = svec[k], res = "";
        //cin >> s;
        int begin = 0, end = 1;
        while (end <= s.size())
        {
            int begin0 = begin;
            if (s[begin] != s[end] - 1)
            {
                res += s[begin++];
                end++;
                begin++;
            }

            else
            {
                // res = res + s[begin] + '-';
                while (s[begin] == s[end] - 1)
                {
                    begin++;
                    end++;
                }
                if (end - begin0 >= 4)
                {
                    res = res + s[begin0] + '-' + s[end - 1];
                    begin = end++;
                }

                else
                {
                    begin = end++;
                    continue;
                }
            }
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
