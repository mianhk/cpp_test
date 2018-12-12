#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0, temp = 0, temp_res = 0, m = 0;
    cin >> n;
    vector<int> ai(n), ci(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        temp_res += temp;
        ci[i] = temp_res;
        ai[i] = temp;
    }
    // for (int i = 0; i < n; ++i)
    //     cout << bi[i] << endl;
    cin >> m;
    vector<int> bi(m), res(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> temp;
        bi[i] = temp;
    }
    for (int k = 0; k < m; k++)
    {
        int start = 0;
        int end = n - 1;
        int mid = (start + end) / 2;
        while (start <= end)
        {
            if (ci[mid] == bi[k] || (bi[k] < ci[mid] && bi[k] > ci[mid - 1]) || (bi[k] < ci[mid] && mid == 0))
            {
                cout << mid + 1 << endl;
                break;
            }
            else if (ci[mid] < bi[k])
            {
                start = mid + 1;
                mid = (start + end) / 2;
            }
            else if (ci[mid] > bi[k])
            {
                end = mid - 1;
                mid = (start + end) / 2;
            }
        }
    }
    return 0;
}
