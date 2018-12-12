#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int res = 0, begin = 0, end = 0;
        vector<char> cvec;
        for (int i = 0; i < s.size(); ++i)
        {
            int begin1 = i;
            for (int j = i + 1; j < s.size(); ++j)
            {
                int begin2 = j;
                while (s[begin1] == s[begin2] && begin1 < j && begin2 < s.size())
                {
                    ++begin1;
                    ++begin2;
                }
                if (begin2 - j > res)
                {
                    res = begin2 - j;
                    begin = j;
                    end = begin2 - 1;
                }
                //res=res>(begin2-j)?res:(begin2-j);
            }
        }
        if (res > 1)
        {
            for (int i = begin; i <= end; ++i)
                cout << s[i];
            cout << " " << res << endl;
        }
        else
            cout << " 0" << endl;
    }
    system("pause");
    return 0;
}
