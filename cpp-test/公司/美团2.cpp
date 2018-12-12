#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, t;
    cin >> n >> k >> t;

    int res = 0;
    vector<int> ivec(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> ivec[i];
    }
    vector<int> temp(k, 0);
    unordered_map<int, int> imap;
    for (int i = 0; i < k; ++i)
    {
        temp[i] = ivec[i];
        imap[temp[i]]++;
    }

    int begin = 0;
    int end = begin + k - 1;

    while (end < n)
    {
        cout << "begin: " << begin << "   end:  " << end << endl;
        for (unordered_map<int, int>::iterator it = imap.begin(); it != imap.end(); ++it)
        {
            cout << "first: " << it->first << "  second:  " << it->second << endl;
            if (it->second >= t)
            {
                cout << "it: " << it->first << endl;
                res++;
                break;
            }
        }
        imap[ivec[begin]] -= 1;

        begin++;
        end++;
    }
    cout << res << endl;

    system("pause");
    return 0;
}
