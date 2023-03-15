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
    bool isCompleteTree(TreeNode* root) {
        vector<TreeNode*>arr;
        arr.push_back(root);
        int i = 0;
        while(i < arr.size() && arr[i]){
            arr.push_back(arr[i] -> left);
            arr.push_back(arr[i] -> right);
            i++;
        }
        while(i < arr.size() && !arr[i])
            i++;
        return i == arr.size();
        
    }
};