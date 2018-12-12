#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec(13, 0);
    int res = 0;
    unordered_map<int, char> imap; //= {, {10, 'T'}, {11, 'J'}, {12, 'Q'}, {13, 'K'}};
    imap[1] = 'A';
    imap[10] = 'T';
    imap[11] = 'J';
    imap[12] = 'Q';
    imap[13] = 'K';

    // imap.insert({1, 'A'});
    // imap.insert({10, 'T'});
    // imap.insert({11, 'J'});
    // imap.insert({12, 'Q'});
    // imap.insert({13, 'K'});

    for (int i = 2; i < 10; ++i)
    {
        imap[i] = '0' + i;
    }
    string s;
    cin >> s;
    for (int i = 0; i < 20; ++i)
    {
        if (s[i] > '0' && s[i] <= '9')
        {
            ivec[s[i] - '0' - 1]++;
        }
        else
        {

            switch (s[i])
            {
                cout << "kaishi " << endl;
            case 'A':
                ivec[0]++;
                break;
            case 'T':
                ivec[9]++;
                break;
            case 'J':
                ivec[10]++;
                break;
            case 'Q':
                ivec[11]++;
                break;
            case 'K':
                ivec[12]++;
                break;
            default:
                break;
            }
        }
    }
    // for (int i = 0; i < 13; ++i)
    //     cout << ivec[i] << " ";
    // cout << endl;
    // cout << "sdaskjdh" << endl;
    //先打印顺子
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            if (ivec[j] != 0)
            {
                int begin = j, end = j;
                while (ivec[++j] != 0)
                {
                    end++;
                }
                if (end - begin + 1 > 4)
                {
                    res++;
                    for (int t = begin; t <= end; ++t)
                    {
                        // cout << imap[t + 1];
                        ivec[t]--;
                    }
                    // cout << endl;
                }
            }
        }
    }
    // cout << "dsda" << endl;
    //打印四个
    for (int i = 0; i < 13; ++i)
    {
        if (ivec[i] == 4)
        {
            res++;
            // cout << imap[i] << imap[i] << imap[i] << imap[i];
            ivec[i] -= 4;
            int tt = 0;
            for (int j = 0; j < 13; ++j)
            {
                if (ivec[j] == 1 && tt <= 2)
                {
                    tt++;
                    cout << imap[j];
                    ivec[j]--;
                }
                else if (j == 12 && tt <= 2)
                {
                    for (int m = 0; m < 13; ++m)
                    {
                        if (ivec[m] == 2)
                        {
                            // cout << imap[m] << imap[m] << endl;
                            ivec[m] -= 2;
                        }
                    }
                }
            }
        }
        //打印三个
        else if (ivec[i] == 3)
        {
            res++;
            // cout << imap[i] << imap[i] << imap[i];
            ivec[i] -= 3;
            for (int j = 0; j < 13; ++j)
            {
                if (ivec[j] == 1)
                {
                    // cout << imap[j] << endl;
                    ivec[j]--;
                }
            }
        }
    }
    // cout << "weqwhekqhwkehqkwdsda32312312321" << endl;
    for (int i = 0; i < 13; ++i)
    {
        if (ivec[i])
            res++;
    }
    cout << res << endl;
    // system("pause");
    return 0;
}
