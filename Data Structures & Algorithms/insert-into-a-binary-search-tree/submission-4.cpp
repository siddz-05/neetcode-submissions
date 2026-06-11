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
    TreeNode* Rinsert(TreeNode *p,int x){
        TreeNode *t=NULL;
        if(p==NULL){
            t=new TreeNode;
            t->val=x;
            t->left=t->right=NULL;
            return t;
        }
        if(x<p->val) p->left=Rinsert(p->left,x);
        else if(x>p->val) p->right=Rinsert(p->right,x);
        
        return p;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) return new TreeNode(val);
        
        Rinsert(root,val);
        return root;
        
    }
};