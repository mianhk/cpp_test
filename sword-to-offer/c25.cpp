#include <iostream>
#include <vecotr>

using namespace std;
/*
����һ�Ŷ�������һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
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
