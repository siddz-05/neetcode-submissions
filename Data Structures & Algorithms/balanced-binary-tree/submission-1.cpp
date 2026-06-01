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

    bool isBalanced(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode*p;
        if(root!=NULL)q.push(root);
        while(!q.empty()){
            p=q.front();
            q.pop();
            if(abs(height(p->left)-height(p->right))>1) return false;
            else{

                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }

        }
        return true;
    }
};
