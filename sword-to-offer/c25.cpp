#include <iostream>
#include <vecotr>

using namespace std;
/*
输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
*/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
vector<int> FindPath(TreeNode* root,int expectedNumber,vector<int>& path,int currentSum){
	currentSum+=root->val;
	path.push_back(root->val);
	
	bool isLeaf=root->left==NULL&&root->right==NULL;
	if(currentSum=expectedNumber&&isLeaf){
		cout<<"A path is fount:";
		vector<int>:iterator iter=path.cbegin();
		for(;iter!=path.cend();++iter){
			cout<<*iter<<endl;
		}
		cout<<endl;
	}
	if(root->left!=NULL)
		FindPath(root->left,expectedNumber,path,currentSum);
	if(root->right!=NULL)
		FindPath(root->right,expectedNumber,path,currentSum);
		
	path.pop_back();
}
vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
	vector<int> path;
	int currentSum=0;
//	queue<int> temp;
	if(root==NULL)
		return path;
	FindPath(root,expectedNumber,path,currentSum);
    
}
int main(){
	
	
	return 0;
}
