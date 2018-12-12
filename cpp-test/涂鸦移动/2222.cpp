#include <bits/stdc++.h>
using namespace std;

int beauty_of_array(vector<int> &array)
{
    int res = 0;
    for (int i = 0; i < array.size(); ++i)
    {
        for (int j = i; j < array.size(); ++j)
        {
            unordered_set<int> iset(array.begin() + i, array.begin() + j + 1);
            for (auto ii : iset)
            {
                res += ii;
            }
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    vector<int> ivec1 = {1};
    vector<int> ivec2 = {1, 2};
    vector<int> ivec3 = {1, 1, 2};
    cout << beauty_of_array(ivec1) << endl;
    cout << beauty_of_array(ivec2) << endl;
    cout << beauty_of_array(ivec3) << endl;
    system("pause");
    return 0;
}
