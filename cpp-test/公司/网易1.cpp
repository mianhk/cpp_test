#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0, temp = 0, temp_res = 0, m = 0;
    cin >> n;
    vector<int> ai(n), bi(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        temp_res += temp;
        bi[i] = temp_res;
        ai[i] = temp;
    }
    for (int i = 0; i < n; ++i)
        cout << bi[i] << endl;
    cin >> m;
    vector<int> res(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> temp;
        for (int j = 0; j < n; ++j)
        {
            if (temp > bi[j])
            {
                continue;
            }
            if (temp <= bi[j])
            {
                res[i] = j + 1;
                break;
            }
            // if (j == n - 1)
            //     res[i] = 1;
        }
    }
    for (int l = 0; l < m; l++)
    {
        int start = 0;
        int end = n - 1;
        int mid = (start + end) / 2;
        while (start <= end)
        {
            if (c[mid] == b[l] || (b[l] < c[mid] && b[l] > c[mid - 1]) || (b[l] < c[mid] && mid == 0))
            {
                cout << mid + 1 << endl;
                break;
            }
            else if (c[mid] < b[l])
            {
                start = mid + 1;
                mid = (start + end) / 2;
            }
            else if (c[mid] > b[l])
            {
                end = mid - 1;
                mid = (start + end) / 2;
            }

            for (int i = 0; i < m; ++i)
                cout << res[i] << endl;
            system("pause");
            return 0;
        }
