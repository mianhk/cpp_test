#include <bits/stdc++.h>
using namespace std;

void print(vector<int> ivec)
{
    for (auto ii : ivec)
        cout << ii << " ";
    cout << endl;
}
void print2(set<int> iset)
{
    for (auto ii : iset)
        cout << ii << " ";
    cout << endl;
}

void solution2(vector<int> &ivec1, vector<int> &ivec2, set<int> &aset, set<int> &rset)
{
    int len1 = ivec1.size(), len2 = ivec2.size();
    unordered_set<int> set1, set2;
    for (int i = 0; i < len1; ++i)
    {
        set1.insert(ivec1[i]);
    }
    for (int i = 0; i < len2; ++i)
    {
        set2.insert(ivec2[i]);
    }
    for (auto ii : set2)
    {
        if (set1.find(ii) == set1.end())
        {
            aset.insert(ii);
        }
    }

    for (auto ii : set1)
    {
        if (set2.find(ii) == set2.end())
            rset.insert(ii);
    }
    int l1 = aset.size(), l2 = rset.size();
    cout << "aset: " << l1 << " rset: " << l2 << endl;
}
void solution(vector<int> &ivec1, vector<int> &ivec2, vector<int> &res1, vector<int> &res2)
{
    int len1 = ivec1.size(), len2 = ivec2.size();
    sort(ivec1.begin(), ivec1.end());
    sort(ivec2.begin(), ivec2.end());
    print(ivec1);
    print(ivec2);
    int i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (ivec1[i] == ivec2[j])
        {
            ++i;
            ++j;
        }
        else if (ivec1[i] < ivec2[j])
        {
            res1.push_back(ivec1[i++]);
        }
        else if (ivec1[i] > ivec2[j])
        {
            res2.push_back(ivec2[j++]);
        }
    }
    print(res1);
    print(res2);
    while (i < len1)
    {
        res1.push_back(i++);
    }
    while (j < len2)
    {
        res2.push_back(j++);
    }
}

int main(int argc, char const *argv[])
{
    int len1 = 10, len2 = 10;
    vector<int> ivec1(len1), ivec2(len2);
    int i = 0, j = 0;
    while (i < len1)
    {
        int temp = rand() % (len1 * 3);
        if (find(ivec1.begin(), ivec1.end(), temp) == ivec1.end())
        {
            ivec1[i++] = temp;
        }
    }
    while (j < len1)
    {
        int temp = rand() % (len2 * 3);
        if (find(ivec2.begin(), ivec2.end(), temp) == ivec2.end())
        {
            ivec2[j++] = temp;
        }
    }
    // for (int i = 0; i < len1; ++i)
    // {
    //     ivec1[i] = rand() % (len1);
    // }
    // for (int i = 0; i < len2; ++i)
    // {
    //     ivec2[i] = rand() % (len2);
    // }
    // print(ivec1);
    // print(ivec2);
    clock_t startTime = clock();
    vector<int> res1, res2;
    solution(ivec1, ivec2, res1, res2);
    print(res1);
    print(res2);
    clock_t endTime = clock();
    cout << "Time  : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;

    clock_t startTime1 = clock();
    set<int> res11, res22;
    solution2(ivec1, ivec2, res11, res22);
    // print2(res11);
    // print2(res22);
    clock_t endTime1 = clock();
    cout << "Time2  : " << double(endTime1 - startTime1) / CLOCKS_PER_SEC << " s" << endl;

    system("pause");
    return 0;
}
