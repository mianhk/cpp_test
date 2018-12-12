#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> res;
    int n = a.size(), inf = 1000000000;
    vector<int> dis(n), b(n, 0);
    for (int i = 1; i < n; ++i)
        dis[i] = a[1][i];
    b[1] = 1;
    int min = 0, u, v;
    for (int i = 1; i <= n - 1; ++i)
    {
        min = inf;
        for (int j = 1; j <= n; ++j)
        {
            if (b[j] == 0 && dis[j] < min)
            {
                min = dis[j];
                u = j;
            }
        }
        b[u] = 1;
        for (v = 1; v <= n; ++v)
        {
            if (a[u][v] < inf)
            {
                if (dis[v] > dis[u] + dis[v])
                    dis[v] = dis[u] + a[u][v];
            }
            res.push_back(dis);
        }
    }

    system("pause");
    return 0;
}
