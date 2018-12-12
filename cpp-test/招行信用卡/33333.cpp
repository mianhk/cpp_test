#include <bits/stdc++.h>

using namespace std;

bool eat(vector<int> &ivec, int res, int hour)
{
    int time = 0;
    for (int i = 0; i < ivec.size(); ++i)
    {
        int temp = ivec[i];
        int temp2 = temp % res;
        time += temp / res;
        if (temp2 > 0)
            time++;
    }
    if (time > hour)
        return false;
    return true;
}
int main()
{
    string str;
    getline(cin, str);
    int hour;
    cin >> hour;
    cout << hour << endl;
    int pos = 0;
    str += ' ';
    vector<int> ivec;
    for (int i = 0; i < str.size();)
    {
        pos = str.find(' ', i);
        if (pos < str.size())
        {
            ivec.push_back(atoi(str.substr(i, pos - i).c_str()));
            i = pos + 1;
        }
    }
    for (auto ii : ivec)
        cout << ii << " ";
    cout << endl;

    int res = 1;
    while (true)
    {
        if (eat(ivec, res, hour))
            break;
        res++;
    }
    cout << res << endl;
    system("pause");
    return 0;
}
