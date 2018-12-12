#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int reverse_stack(stack<int> &istack)
{
    int result = istack.top();
    istack.pop();
    if (istack.empty())
        return result;
    else
    {
        int last = reverse_stack(istack);
        return last;
    }
}

int main(int argc, char const *argv[])
{
    stack<int> istack;
    int n = 5;
    for (int i = 0; i < n; ++i)
    {
        istack.push(i + 1);
    }
    cout << reverse_stack(istack) << endl;
    system("pause");
    return 0;
}
