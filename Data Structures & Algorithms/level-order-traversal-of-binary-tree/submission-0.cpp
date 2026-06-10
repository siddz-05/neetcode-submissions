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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans2;
        vector<int> ans1;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                TreeNode*p=q.front();
                q.pop();
                ans1.push_back(p->val);
                if (p->left) q.push(p->left);
                if (p->right) q.push(p->right);
            }
            ans2.push_back(ans1);
            ans1.clear();
            
        }
        return ans2;
    }
};
