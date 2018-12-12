#include <bits/stdc++.h>
using namespace std;

int convertion2ten(string s, int d1)
{
    int i, t, num, size = s.size();
    num = 0;
    for (i = 0; i < size; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            t = s[i] - '0';
        }
        else
            t = s[i] - 'A' + 10;
        num = num * d1 + t;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    vector<int> res;
    for (int k = 0; k < t; ++k)
    {
        int d1, d2;
        string s;
        cin >> d1 >> d2 >> s;
        // cout << "d1: " << d1 << " d2: " << d2 << "  s: " << s << endl;
        for (int i = 0; i < s.size(); ++i)
        {
            int temp1 = convertion2ten(s.substr(0, i + 1), d1);
            int temp2 = convertion2ten(s.substr(i + 1, s.size() - i + 1), d2);
            if (temp1 == temp2)
            {
                res.push_back(temp1);
            }
        }
    }
    for (auto ii : res)
        cout << ii << endl;
    //system("pause");
    return 0;
}
