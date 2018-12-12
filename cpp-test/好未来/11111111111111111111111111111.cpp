#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        char ivec[1000];
        s += ' ';
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
                sNum.push(n);
                cout << "n: " << n << endl;
            }
            k = 0;
            switch (s[i])
            {
            case '+':
                sCh.push('+');
                break;
            case '-':
                sCh.push('-');
                break;
            case '*':
                sCh.push('*');
                break;
            case '/':
                sCh.push('/');
                break;
            }
        }
        res = sNum.front();
        sNum.pop();
        while (!sNum.empty() && !sCh.empty())
        {
            int temp = sNum.front();
            sNum.pop();
            switch (sCh.front())
            {
            case '+':
                res += temp;
                break;
            case '-':
                res -= temp;
                break;
            case '*':
                res *= temp;
                break;
            case '/':
                res /= temp;
                break;
            }
            sCh.pop();
            cout << "res: " << res << endl;
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}
