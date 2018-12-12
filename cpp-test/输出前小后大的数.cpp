#include <iostream>
using namespace std;
/* 整型数组里找出符合要求的元素，满足前面的元素比该元素小，后面的元素比该元素大。

时间复杂度为：O（n）

原理：另外开辟两个数组，初始化为原数组值，一个用于存储到当前元素为止前面部分的最大值，另一个用于存储到当前元素为止，后面部分的最小值。最后用当前元素和最大值数组和最小值数组中的元素进行比较，判断元素是否是符合要求的值。 */
void GetGriticValue(const int arr[], size_t size)
{
    int *min_arr = new int[size];
    int *max_arr = new int[size];
    for (size_t i = 0; i < size; ++i)
    {
        min_arr[i] = arr[i];
        max_arr[i] = arr[i];
    }
    for (size_t j = 1; j < size; ++j)
    {
        if (max_arr[j] < max_arr[j - 1])
            max_arr[j] = max_arr[j - 1];
        if (min_arr[size - 1 - j] > min_arr[size - j])
            min_arr[size - 1 - j] = min_arr[size - j];
    }
    for (size_t k = 0; k < size; ++k)
    {
        if ((arr[k] >= max_arr[k]) && (arr[k] <= min_arr[k]))
            cout << arr[k] << " ";
    }
}
int main()
{
    int arr[] = {1, 3, 2, 4, 5};
    GetGriticValue(arr, 5);
}
#include <iostream>
using namespace std;
void GetGriticValue(const int arr[], size_t size)
{
    int *min_arr = new int[size];
    int *max_arr = new int[size];
    for (size_t i = 0; i < size; ++i)
    {
        min_arr[i] = arr[i];
        max_arr[i] = arr[i];
    }
    for (size_t j = 1; j < size; ++j)
    {
        if (max_arr[j] < max_arr[j - 1])
            max_arr[j] = max_arr[j - 1];
        if (min_arr[size - 1 - j] > min_arr[size - j])
            min_arr[size - 1 - j] = min_arr[size - j];
    }
    for (size_t k = 0; k < size; ++k)
    {
        if ((arr[k] >= max_arr[k]) && (arr[k] <= min_arr[k]))
            cout << arr[k] << " ";
    }
}
int main()
{
    int arr[] = {1, 3, 2, 4, 5};
    GetGriticValue(arr, 5);
 <iostream>
    using namespace std;
    void GetGriticValue(const int arr[], size_t size)
    {
        int *min_arr = new int[size];
        int *max_arr = new int[size];
        for (size_t i = 0; i < size; ++i)
        {
            min_arr[i] = arr[i];
            max_arr[i] = arr[i];
        }
        for (size_t j = 1; j < size; ++j)
        {
            if (max_arr[j] < max_arr[j - 1])
                max_arr[j] = max_arr[j - 1];
            if (min_arr[size - 1 - j] > min_arr[size - j])
                min_arr[size - 1 - j] = min_arr[size - j];
        }
        for (size_t k = 0; k < size; ++k)
        {
            if ((arr[k] >= max_arr[k]) && (arr[k] <= min_arr[k]))
                cout << arr[k] << " ";
        }
    }
    int main()
    {
        int arr[] = {1, 3, 2, 4, 5};
        GetGriticValue(arr, 5);
    