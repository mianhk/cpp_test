#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//打印数组
void printArray(vector<int> &ivec)
{
    for (int i = 0; i < ivec.size(); ++i)
        cout << ivec[i] << " ";
    cout << endl;
}

/* 归并排序 */

void __merge(vector<int> &ivec, int l, int mid, int r)
{
    vector<int> num(r - l + 1);
    for (int i = l; i <= r; ++i)
    {
        // num.push_back(ivec[i]);
        num[i - l] = ivec[i];
    }
    printArray(num);
    int i = l, j = mid + 1;
    for (int k = l; k <= r; ++k)
    {
        if (i > mid)
        {
            ivec[k] = num[j - l];
            ++j;
        }
        else if (j > r)
        {
            ivec[k] = num[i - l];
            ++i;
        }
        else if (ivec[i - l] < ivec[j - l])
        {
            ivec[k] = num[i - l];
            ++i;
        }
        else
        {
            ivec[k] = num[j - l];
            ++j;
        }
    }
}

void __merger_sort(vector<int> &ivec, int l, int r)
{
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;
    __merger_sort(ivec, l, mid);
    __merger_sort(ivec, mid + 1, r);
    __merge(ivec, l, mid, r);
}

void merger_sort(vector<int> &ivec)
{
    __merger_sort(ivec, 0, ivec.size() - 1);
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    vector<int> ivec;
    int rangl = 10, rangr = 100;
    for (int i = 0; i < 10; ++i)
    {
        ivec.push_back(rand() % (rangr - rangl + 1) + rangl);
    }
    //调用排序函数
    printArray(ivec);
    merger_sort(ivec);
    cout << "after sort: " << endl;
    printArray(ivec);
    // system("pause");
    return 0;
}
