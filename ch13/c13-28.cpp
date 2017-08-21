#include <iostream>
#include <string>
using namespace std;

class TreeNode{
	
	public:
		TreeNode():value(""),count(0),left(nullptr),right(nullptr){
		}
		TreeNode(const TreeNode&); //¿½±´¹¹Ôìº¯Êý 
	private:
		string value;
		int count;
		TreeNode *left;
		TreeNode *right;
};

class BinStrTree{
	private:
		TreeNode *root;
};

TreeNode::TreeNode(const TreeNode &t){
	auto newleft=new TreeNode()
}
