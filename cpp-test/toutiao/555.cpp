#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        unordered_map<char, int> imap;
        string temp;
        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            int itemp = stoi(temp.substr(2, temp.size() - 3));
            cout << "itemp:  " << itemp << endl;
            char c1 = temp[0], c2 = temp[temp.size() - 1];
            cout << "c1: " << c1 << "  c2: " << c2 << endl;
            if (imap.find(c2) == imap.end() || imap.find(c2) == imap.end())
            {
                imap[c2] = 0;
                imap[c1] = itemp;
            }
            else if (imap.find(c2) != imap.end())
            {
                imap[c1] = itemp - imap[c2];
            }
            else
            {
                imap[c2] = itemp - imap[c1];
            }
        }
        for (auto ii : imap)
            cout << ii.first << " " << ii.second << endl;
        for (int i = 0; i < m; ++i)
        {
            cin >> temp;
            char c1 = temp[0], c2 = temp[temp.size() - 1];
            if (imap.find(c1) == imap.end() || imap.find(c2) == imap.end())
                cout << "cannot_answer" << endl;
            else
            {
                cout << imap[c1] - imap[c2] << endl;
            }
        }
    }
    system("pause");
    return 0;
}
