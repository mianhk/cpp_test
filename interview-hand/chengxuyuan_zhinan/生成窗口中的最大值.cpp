#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

// 生成窗口中的最大值

vector<int> getMaxWindow(vector<int> &ivec, int w)
{
    vector<int> res;
    if (ivec.size() < w)
        return res;
    res.resize(ivec.size() - w + 1);
    deque<int> mqueue;
    int index = 0;
    for (int i = 0; i < ivec.size(); ++i)
    {
        while (!mqueue.empty() && ivec[mqueue.back()] <= ivec[i])
        {
            mqueue.pop_back();
        }
        mqueue.push_back(i);
        if (mqueue.front() == i - w)
        {
            mqueue.pop_front();
        }
        if (i >= w - 1)
        {
            res[index++] = ivec[mqueue.front()];
        }
    }
    return res;
}
int main()
{
    vector<int> ivec = {4, 3, 5, 4, 3, 3, 6, 7};
    vector<int> res;
    res = getMaxWindow(ivec, 3);
    for (auto ii : res)
    {
        cout << ii << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
