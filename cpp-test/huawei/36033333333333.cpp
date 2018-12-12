#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ivec1(n), ivec2(n);
    for (int i = 0; i < n; i++)
        cin >> ivec1[i];
    for (int i = 0; i < n; i++)
        cin >> ivec2[i];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; ++j)
        {
            // if (ivec1[i])
        }
    }
    cout << n / 2 << endl;
    // system("pause");
    return 0;
}
