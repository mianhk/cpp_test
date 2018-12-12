#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp, count;
    while (cin >> count)
    {
        set<int> res;
        for (int i = 0; i < count; ++i)
        {
            cin >> temp;
            res.insert(temp);
        }
        for (set<int>::iterator it = res.begin(); it != res.end(); ++it)
            cout << *it << endl;
    }
    system("pause");
    return 0;
}
