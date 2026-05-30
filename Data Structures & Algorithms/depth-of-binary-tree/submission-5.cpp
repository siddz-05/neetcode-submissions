/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        int x,y;
        TreeNode *p=root;
        if(p==NULL) return 0;
        x=maxDepth(p->left);
        y=maxDepth(p->right);
        return (x>y)?x+1:y+1;
        
    }
};
