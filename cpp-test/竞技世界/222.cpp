#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
string reversePinYin(string str)
{
    vector<string> svec;
    string res = "";
    int i = 0;
    while (i < str.size())
    {
        int j = i;
        while (str[j] != ' ' && j < str.size())
            ++j;
        cout << str.substr(i, j) << "  i: " << i << " j:  " << j << endl;
        svec.push_back(str.substr(i, j - i));
        i = j + 1;
    }
    for (int k = 0; k < svec.size(); ++k)
    {
        cout << "res: " << res << endl;
        for (int t = svec[k].size() - 1; t >= 0; --t)
            res += svec[k][t];
        res += ' ';
    }
    return res;
}
/******************************结束写代码******************************/

int main()
{
    string res;

    string _str;
    getline(cin, _str);

    res = reversePinYin(_str);
    cout << res << endl;
    // system("pause");
    return 0;
}
