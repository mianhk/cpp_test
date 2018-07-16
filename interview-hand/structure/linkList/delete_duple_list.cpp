#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution
{
  public:
    ListNode *deleteDuplication(ListNode *pHead)
    {
        if (!pHead || !pHead->next)
            return pHead;
        ListNode *vHead = new ListNode(0);
        vHead->next = pHead;
        ListNode *pre = vHead;
        ListNode *cur = pHead;
        while (cur && cur->next)
        {
            ListNode *next = cur->next;
            if (cur->val == next->val)
            {
                cur = next->next;
                pre->next = cur;
            }
            else
            {
                if (next->next)
                {
                    pre = cur;
                    cur = next;
                    next = next->next;
                }
            }
        }
        return vHead->next;
    }
};

int main(int argc, char const *argv[])
{
    ListNode* 
 system("pause");
 return 0;

}
