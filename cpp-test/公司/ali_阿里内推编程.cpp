#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int i)
    {
        val = i;
        next = nullptr;
    }
};

/* 
编译器版本: gcc 4.8.4
请使用标准输入输出(stdin，stdout) ；请把所有程序写在一个文件里，勿使用已禁用图形、文件、网络、系统相关的头文件和操作，如sys/stat.h , unistd.h , curl/curl.h , process.h
时间限制: 3S (C/C++以外的语言为: 5 S)   内存限制: 128M (C/C++以外的语言为: 640 M)
输入:
输入： 小明搜集到的系统耗时和依赖列表
5  4   // 表示有5个系统和 4个依赖关系
3      // 调用1号系统耗时 3 ms
2      // 调用2号系统耗时 2 ms
10     // 调用3号系统耗时 10 ms
5      // 调用4号系统耗时 5 ms
7      //  调用5号系统耗时 7 ms
1 2    //  2号系统依赖1号系统
1 3    //  3号系统依赖1号系统
2 5    //  2号系统依赖5号系统
4 5    //  4号系统依赖5号系统
输出:
输出链路条数和最长的耗时
3 13
输入范例:
输入： 小明搜集到的系统耗时和依赖列表
5  4   // 表示有5个系统和 4个依赖关系
3      // 调用1号系统耗时 3 ms
2      // 调用2号系统耗时 2 ms
10     // 调用3号系统耗时 10 ms
5      // 调用4号系统耗时 5 ms
7      //  调用5号系统耗时 7 ms
1 2    //  2号系统依赖1号系统
1 3    //  3号系统依赖1号系统
2 5    //  2号系统依赖5号系统
4 5    //  4号系统依赖5号系统
输出范例:
3 13

 */
int main(int argc, char const *argv[])
{
    //输入
    int sum, alias, temp, temp2;
    cin >> sum >> alias;
    unordered_map<int, int> cost;
    for (int i = 0; i < sum; ++i)
    {
        cin >> temp;
        cost[i + 1] = temp;
    }
    vector<Node *> links;
    for (int i = 0; i < alias; ++i)
    {
        cin >> temp >> temp2;
        Node *pNode = new Node(temp);
        if (find(links.begin(), links.end(), pNode) != links.end())
        {
            continue;
        }
        else
        {
            pNode->next = new Node(temp2);
            links.push_back(pNode);
        }
    }
    //输出结果
    int link_sum = 0, result = 0;
    for (int i = 0; i < links.size(); ++i)
    {
        Node *pNode = links[i];
        ++link_sum;
        int temp_res = 0;
        while (!pNode->next)
        {
            temp_res += cost[pNode->val];
        }
        if (temp_res < result)
            result = temp_res;
    }

    cout << link_sum << " " << result << endl;

    //  system("pause");
    return 0;
}
