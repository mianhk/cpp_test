#include <iostream>
#include <vector>
#include <deque>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

vector<int> PrintFronTopToBottom(TreeNode* root){
	vector<int> result;
	deque<TreeNode *> toPrint;
	toPrint.push_back(root);
	while(!toPrint.empty()){
		TreeNode *temp=toPrint.front();
		if(temp->left!=nullptr)
			toPrint.push_back(temp->left);
		if(temp->right!=nullptr)
			toPrint.push_back(temp->right);
		result.push_back(temp->val);
		toPrint.pop_front();
	} 
	return result;
}

int main(){
	TreeNode root(2);
	TreeNode root1(3);
	TreeNode root2(4);
	TreeNode root3(5);
	TreeNode root4(6);
	root->left=root1;
	root->right=root2;
	root1->left=root3;
	root1->right=root4;
	vector<int> result=PrintFronTopToBottom(root);
	for(int ii:result){
		cout<<ii<<" ";
	}
	return 0;
}
