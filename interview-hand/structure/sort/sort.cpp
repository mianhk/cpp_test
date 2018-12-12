#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
//冒泡排序  O(n^2)
//两两比较相邻关键字,如果反序则交换
void bobSort(vector<int> &ivec)
{
    for (int i = 0; i < ivec.size(); ++i)
        for (int j = i + 1; j < ivec.size(); ++j)
        {
            if (ivec[j] < ivec[i])
                swap(ivec[i], ivec[j]);
        }
}

//选择排序 )(n^2)
//每次循环找出一个最小的数进行交换
void selectSort(vector<int> &ivec)
{
    for (int i = 0; i < ivec.size(); ++i)
    {
        int min = i;
        for (int j = i + 1; j < ivec.size(); ++j)
        {
            if (ivec[j] < ivec[min])
                min = j;
        }
        if (min != i)
            swap(ivec[min], ivec[i]);
    }
}
//插入排序
void insertionSort(vector<int> &ivec)
{
    for (int i = 1; i < ivec.size(); ++i)
    {
        int e = ivec[i];
        int j;
        for (j = i; j > 0 && ivec[j - 1] > e; --j)
        {
            ivec[j] = ivec[j - 1];
        }
        ivec[j] = e;
    }
}
//希尔排序
void shellSort(vector<int> &ivec)
{
    int h = 1, n = ivec.size();
    while (h < n / 3)
        h = 3 * h + 1;

    while (h >= 1)
    {
        for (int i = h; i < n; ++i)
        {
            int e = ivec[i], j;
            for (j = i; j >= h && ivec[j - h] > e; j -= h)
                ivec[j] = ivec[j - h];
            ivec[j] = e;
        }
        h /= 3;
    }
}
//归并排序

//快速排序

//堆排序

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
    printArray(ivec);

    //调用排序函数
    // bobSort(ivec);
    // insertionSort(ivec);
    // selectSort(ivec);
    shellSort(ivec);
    printArray(ivec);
    system("pause");
    return 0;
}
