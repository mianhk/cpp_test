#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
  public:
    int val;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    TreeNode(int val1) : val(val1), left(nullptr), right(nullptr) {}
};

void convert2List(TreeNode *pRoot, TreeNode *&pointer)
{
    if (pRoot == NULL)
    {
        return;
    }

    if (pRoot->left != NULL)
    {
        convert2List(pRoot->left, pointer);
    }

    pRoot->left = pointer;
    if (pointer != NULL)
    {
        pointer->right = pRoot;
    }

    pointer = pRoot;
    if (pRoot->right != NULL)
    {
        convert2List(pRoot->right, pointer);
    }
}

TreeNode *Convert(TreeNode *pRootOfTree)
{
    if (pRootOfTree == NULL)
        return NULL;
    TreeNode *pointer = NULL;
    convert2List(pRootOfTree, pointer);
    while (pointer->left != NULL)
    {
        pointer = pointer->left;
    }
    return pointer;
}

int main()
{
    string s;
    getline(cin, s);
    s += ' ';

    int pos;
    vector<int> ivec;
    for (int i = 0; i < s.size(); ++i)
    {
        pos = s.find(' ', i);
        if (pos < s.size())
        {
            ivec.push_back(atoi(s.substr(i, pos - i + 1).c_str()));
            i = pos;
        }
    }

    int len = ivec.size();
    vector<TreeNode *> nvec;
    for (int i = 0; i < len; ++i)
    {
        TreeNode *p = new TreeNode(0);
        nvec.push_back(p);
        // cout << "sdjkahd" << endl;
    }
    // cout << nvec.size() << endl;
    for (int i = 0; i < len; ++i)
    {
        nvec[i]->val = ivec[i];
        if (2 * (i + 1) - 1 < len)
        {
            nvec[i]->left = nvec[2 * (i + 1) - 1];
        }
        if (2 * (i + 1) < len)
        {
            nvec[i]->right = nvec[2 * (i + 1)];
        }
    }
    /*     for (int i = 0; i < len; ++i)
    {
        TreeNode *p = nvec[i];
        cout << p->val << " ";
        if (p->left)
            cout << p->left << " ";
        if (p->right)
            cout << p->right << " ";
        cout << endl;
    } */
    // cout << nvec.size() << endl;
    // cout << s << endl;
    //for(auto ii:iset)
    //  cout<<ii<<" ";
    //cout<<endl;
    TreeNode *p = Convert(nvec[0]);
    vector<int> res;
    // TreeNode *p = nvec[0];
    // while (p->left != nullptr)
    //     p = p->left;
    while (p->right != nullptr)
    {
        cout << p->val << " ";
        p = p->right;
    }
    system("pause");
    return 0;
}
