#include <iostream>
#include <queue>
#include <math.h>
#include <cstdlib>
using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int getheight(TreeNode *node){
	if(node == NULL) return 0;
	int lh, rh;
	lh = getheight(node->left);
	rh = getheight(node->right);

	if(lh == -1 || rh == -1) return -1;
	else if(abs(lh - rh) <= 1) return max(lh,rh) + 1;
	else return -1;
	
    }
    bool isBalanced(TreeNode *root) {
	if(getheight(root) == -1) return false;
	else return true;
    }
};

int main(){
	return 0;
}
