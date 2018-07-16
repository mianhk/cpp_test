#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* 只能往右走或者往下走 */
//暴力递归
int walk(vector<vector<int>> &ivec, int i, int j)
{
    if (i == ivec.size() - 1 && j == ivec[0].size() - 1)
    {
        return ivec[i][j];
    }
    if (i == ivec.size() - 1)
        return ivec[i][j] + walk(ivec, i, j + 1);
    if (j == ivec[0].size() - 1)
        return ivec[i][j] + walk(ivec, i + 1, j);

    int right = walk(ivec, i, j + 1);
    int down = walk(ivec, i + 1, j);
    return ivec[i][i] + max(right, down);
}
int main(int argc, char const *argv[])
{
    system("pause");
    return 0;
}
