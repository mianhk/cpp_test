#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        char ivec[1000];
        queue<int> sNum;
        queue<char> sCh;
        int k = 0, res = 0, n = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                ivec[k++] = s[i];
                continue;
            }
            ivec[k] = 0;
            if (ivec[0] != 0)
            {
                n = atoi(ivec);
                ivec[0] = 0;
                cout << "n: " << n << endl;
                sNum.push(n);
            }

            k = 0;
            switch (s[i])
            {
            case '+':
                res += sNum.front();
                sNum.pop();
                break;
            case '-':
                res += sNum.front();
                sNum.pop();
                break;
            case '*':
                res *= sNum.front();
                sNum.pop();
                break;
            case '/':
                if (sNum.front())
                    res /= sNum.front();
                sNum.pop();
                break;
            }
            cout << "res: " << res << endl;
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
