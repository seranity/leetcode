#include <iostream>
#include <queue>
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
    int maxDepth(TreeNode *root) {
        queue<TreeNode *> qt;
	int h = 0;
	bool flag = true;

        if(root)qt.push(root);
	qt.push(NULL);

	while(qt.size() != 0){
		TreeNode *tmp = qt.front();
		qt.pop();
		if(tmp == NULL) {
			flag = true;
			if(qt.size()!=0) {
				qt.push(NULL);
			}
			else break;
		} else {
			if(flag){
				flag = false;
				h++;
			}
			if(tmp->left) qt.push(tmp->left);
			if(tmp->right) qt.push(tmp->right);
		}
	}
	return h;
    }
};

int main() {
	return 0;
}
