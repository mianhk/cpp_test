#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> score(n);
        for (int i = 0; i < n; ++i)
            cin >> score[i];
        for (int i = 0; i < m; ++i)
        {
            char c;
            int t1, t2;
            cin >> c >> t1 >> t2;
            if (c == 'Q')
            {
                int res = -1;
                for (int j = t1 - 1; j < t2; ++j)
                {
                    res = (res > score[j] ? res : score[j]);
                }
                cout << res << endl;
            }
            else
                (c == 'U')
                {
                    score[t1 - 1] = t2;
                }
        }
    }
    system("pause");
    return 0;
}
