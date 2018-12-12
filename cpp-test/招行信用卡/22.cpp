#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int pos = 0;
        str += ' ';
        multiset<int> iset;

        for (int i = 0; i < str.size();)
        {
            pos = str.find(' ', i);
            if (pos < str.size())
            {
                iset.insert(atoi(str.substr(i, pos - i).c_str()));
                // cout << "ighwuiehqiuehq" << endl;
                i = pos + 1;
            }
        }
        int hour;
        cin >> hour;
        // for (auto ii : iset)
        //     cout << ii << " ";
        // cout << endl;
        // multiset<int>::iterator it = iset.begin();
        int res = *iset.begin();
        cout << res << endl;
        for (; res < = *(iset.rbegin()); ++res)
        {
            int time = 1;
            iset.erase(*iset.begin());
            while (time < hour)
            {
                if (*iset.begin() > res)
                {

                    int temp = *iset.begin() - res;
                    iset.erase(*iset.begin());
                    iset.insert(temp);
                }
                else
                {
                    iset.erase(*iset.begin());
                }
            }
            cout << res << endl;
            if (iset.empty())
            {
                cout << res << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}
