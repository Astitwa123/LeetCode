/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *
 * };
 */
class Solution {
public:
    vector<int>v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)return v;
        
            v.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        
        return v;
    }
};