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
    int height(TreeNode* p){
        int x,y;
        if(p==NULL) return 0;
        x=height(p->left);
        y=height(p->right);
        return (x>y)?x+1:y+1;
        
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int x,y;
        x=height(root->left);
        y=height(root->right);
        return (x>y)?x+1:y+1;
        
    }
};
