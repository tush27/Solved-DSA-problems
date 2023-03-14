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
    int ans=0;
    int num=0;
    void helper(TreeNode*root){
        if(!root)
            return;
        num = num * 10 + root->val;
        helper(root->left);
        helper(root->right);
        if(!root->right && !root->left){
            ans += num;
        }
        num /= 10;
        return;
    }
public:
    int sumNumbers(TreeNode* root) {
        helper(root);
        return ans;  
    }
};