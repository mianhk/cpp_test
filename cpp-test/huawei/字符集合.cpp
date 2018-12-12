#include <bits/stdc++.h>

using namespace std;
/*
输入一个字符串，求出该字符串包含的字符集合

输入描述:
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
输出描述:
每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
输入例子1:
abcqweracb
输出例子1:
abcqwer
*/
int main()
{
    string s;
    while (cin >> s)
    {
        vector<char> cvec(256, 0);
        vector<char> res;
        for (int i = 0; i < s.size(); ++i)
            if (cvec[s[i]] == 0)
            {
                res.push_back(s[i]);
                cvec[s[i]] = 1;
            }
        for (auto cc : res)
            cout << cc;
        cout << endl;
    }
    return 0;
}
