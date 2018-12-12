#include <bits/stdc++.h>

using namespace std;

bool isTrue(string &s, int i, int j)
{
    stack<char> cstack;
    for (int t = i; t <= j; ++t)
    {
        if (s[t] == '(')
            cstack.push('(');
        else if (s[t] == ')')
        {
            if (cstack.empty())
                return false;
            else
                cstack.pop();
        }
        else
            return false;
    }
    return cstack.empty();
}
int main()
{
    string s;
    while (cin >> s)
    {
        int res = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            for (int j = s.size() - 1; j > i; --j)
            {

                if (isTrue(s, i, j))
                {
                    cout << s << endl;
                    res = res > (j - i + 1) ? res : (j - i + 1);
                }
            }
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
