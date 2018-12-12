#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMoves2(vector<int> &nums, int k, int &uneven, int &mid)
{
    int res = 0, i = 0, j = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while (i < j)
    {
        int temp = nums[j--] - nums[i++];
        // if (k <= res + temp)
        // {
        //     break;
        // }
        res += temp;
    }
    uneven = nums[j] - nums[i];
    mid = nums[j];
    return res;
}

int main(int argc, char const *argv[])
{
    int n, k, temp, uneven, mid;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        nums[i] = temp;
    }

    int res = minMoves2(nums, k, uneven, mid);
    cout << uneven << " " << res << endl;
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        while (nums[i] < mid)
        {
            while (nums[j]-- > mid)
            {
                cout << j + 1 << " " << i + 1 << endl;
                ++nums[i];
            }
            --j;
        }
        ++i;
    }
    system("pause");
    return 0;
}
