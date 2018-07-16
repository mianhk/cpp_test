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

//堆排序，大根堆
void heap_insert(vector<int> &ivec, int i)
{
    while (ivec[i] > ivec[(i - 1) / 2])
    {
        swap(ivec[i], ivec[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}
void heapify(vector<int> &ivec, int index, int size)
{
    int left = index * 2 + 1;
    while (left < size)
    {
        int largest = left + 1 < size && ivec[left + 1] > ivec[left] ? left + 1 : left;
        largest = ivec[largest] > ivec[index] ? largest : index;
        if (largest == index)
            break;
        swap(ivec[largest], ivec[index]);
        index = largest;
        left = index * 2 + 1;
    }
}
void heap_sort(vector<int> ivec)
{
    if (ivec.empty() || ivec.size() < 2)
        return;
    for (int i = 0; i < ivec.size(); ++i)
    {
        heap_insert(ivec, i);
    }
    int heapSize = ivec.size();
    swap(ivec[0], ivec[--heapSize]);
    while (heapSize)
    {
        heapify(ivec, 0, heapSize);
        swap(ivec[0], ivec[--heapSize]);
    }
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
    heap_sort(ivec);
    cout << "after sort: " << endl;
    printArray(ivec);
    // system("pause");
    return 0;
}
