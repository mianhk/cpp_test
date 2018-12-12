#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<int, int> imap;
    // for (int i = 0; i < 10; i++)
    // {
    //     imap[i] = 0;
    // }
    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != '0')
            flag = true;
        if (flag)
            imap[s[i] - '0']++;
    }
    vector<pair<int, int>> imap_vec(imap.begin(), imap.end());
    sort(imap_vec.begin(), imap_vec.end(), cmp);
    map<int, int>::iterator it;
    // for (it = imap.begin(); it != imap.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    int index = 0, num = imap_vec[0], temp_sum = 0;
    for (it = imap.begin(); it != imap.end(); it++)
    {
        if (it->second == num)
            ++temp_sum;
        cout << it->first << " " << it->second << endl;
    }
    index = temp_sum / 2;
    // map<int, int> res_map;
    // it = imap.begin();
    int i = 0;

    int result = 0;
    it = imap.begin();
    for (int i = 0; i < k; ++i)
    {
        int temp = s[i] - '0';
        cout << "sdukahsdj:  " << imap_vec[index].first << endl;
        if (temp != imap_vec[index].first)
        {
            result += (temp - imap_vec[index].second > 0 ? temp - imap_vec[index].second : imap_vec[index].second - temp);
            s[i] = imap_vec[index].first + '0';
        }
    }
    cout << result << endl;
    cout << s << endl;
    system("pause");
    return 0;
}
