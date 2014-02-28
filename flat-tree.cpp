
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode (int x): val(x), left(NULL), right(NULL) {}
};

void travel(TreeNode *root, TreeNode *parent) {
    // visit mid
    if(root == NULL) {
       //wrong!
       return;
    }
    
    TreeNode *cur_parent = parent;
    
    parent = root;
    
    if(root->left != NULL) {
       travel(root->left, parent);
    }
    if(root->right != NULL) {
       travel(root->right, parent);
    }
    cur_parent->right = root;
    
    return;
}
class Solution {
public:
    void flatten(TreeNode *root) {
        
    }
};

TreeNode* buildTree(int& num, int size) {
	TreeNode* node = new TreeNode(num);
	if(size/2 != 0) {
		TreeNode* leftson = buildTree(++num, size/2+1);
		TreeNode* rightson = buildTree(++num, size/2);
		node->left = leftson;
		node->right = rightson;
	}
	
}
*/

int main(){
//	Solution sol;
//	sol.flatten();
	return 0;
}
