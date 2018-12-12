#include <bits/stdc++.h>
using namespace std;

int _partition(vector<int> &ivec, int l, int r)
{
    int mid = l;
    int j = l;
    for (int i = l + 1; i <= r; ++i)
    {
        if (ivec[i] < ivec[mid])
        {
            // ++j;
            swap(ivec[i], ivec[++j]);
        }
    }
    swap(ivec[mid], ivec[j]);
    return j;
}

void _quick_sort(vector<int> &ivec, int l, int r)
{
    if (l >= r)
        return;
    int mid = _partition(ivec, l, r);
    _quick_sort(ivec, l, mid - 1);
    _quick_sort(ivec, mid + 1, r);
}
//递归的快速排序
void quick_sort(vector<int> &ivec)
{
    _quick_sort(ivec, 0, ivec.size() - 1);
}

void _quickSort1(vector<int> &ivec, int l, int r)
{
    if (l >= r)
        return;
    stack<int> s;
    s.push(l);
    s.push(r);
    while (!s.empty())
    {
        int right = s.top();
        s.pop();
        int left = s.top();
        s.pop();
        int mid = _partition(ivec, left, right);
        if (left < right)
        {
            s.push(left);
            s.push(mid);
            s.push(mid + 1);
            s.push(right);
        }
    }
}

//非递归快速排序
void quickSort1(vector<int> &ivec)
{
    _quickSort1(ivec, 0, ivec.size() - 1);
}

//打印数组
void printArray(vector<int> &ivec)
{
    for (int i = 0; i < ivec.size(); ++i)
        cout << ivec[i] << " ";
    cout << endl;
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
    // bobSort(ivec);
    // selectSort(ivec);
    printArray(ivec);
    quickSort1(ivec);
    cout << ivec.size() << endl;
    printArray(ivec);
    system("pause");
    return 0;
}
