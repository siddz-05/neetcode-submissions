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
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*>q;
        int sum=0;

        if(root) q.push(root);
        while(!q.empty()){
            TreeNode*p=q.front();
            q.pop();
            if(p->val>=low && p->val<=high)sum+=p->val;
            
            if (p->left && p->val > low) {
                q.push(p->left);
            }
            
            if (p->right && p->val < high) {
                q.push(p->right);
            }

        }
        return sum;
        
    }
};