#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int res = 0;
        int len = s.size() - 2;
        for (int i = 2; i < s.size(); ++i)
        {
            int temp;
            if (s[i] >= '0' && s[i] <= '9')
                temp = s[i] - '0';
            else if (s[i] >= 'A' && s[i] <= 'F')
                temp = s[i] - 'A' + 10;
            // cout << temp << endl;
            // cout << temp * pow(16, (s.size() - i + 1)) << endl;
            res += temp * pow(16, (s.size() - i - 1));
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
