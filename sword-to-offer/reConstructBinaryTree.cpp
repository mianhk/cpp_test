#include <iostream>
#include <vector>

using namespace std;

class TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int n):val(n),left(NULL),right(NULL){
	}
};

TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
	if(pre.size()==0||vin.size()==0||pre.size()!=vin.size())
        return nullptr;
    TreeNode *root=new TreeNode(pre[0]);
    vector<int> pre1,pre2,vin1,vin2;
    int i=0;
    for(;i!=vin.size();++i){
    	if(root->val==vin[i]){
            break;
        }
    }
        
    if(i==vin.size()-1)
        return root;
    for(int j=0;j<i;++j){
        pre1[j]=pre[1+j];
        vin1[j]=vin[j];
    }
    for(int j=0;j<vin.size()-i-1;++j){
        pre2[j]=pre[1+i+j];
        vin2[j]=vin[1+i+j];
    }
    root->left=reConstructBinaryTree(pre1,vin1);
    root->right=reConstructBinaryTree(pre2,vin2);
    return root;
    }
    
int main(){
	vector<int> pre={1,2,4,7,3,5,6,8};
	vector<int> vin={4,7,2,1,5,3,8,6};
	reConstructBinaryTree(pre,vin);
	return 0;
}
