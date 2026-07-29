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
    int dfs(TreeNode* root, int ans){
        if(root == NULL ) return 0;
        int good = 0;
        if(root -> val >= ans){
            good = 1;
            ans = max(root -> val, ans);
        }
        good += dfs(root -> left, ans);
        good += dfs(root -> right, ans);
        return good;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root, root -> val);
    }
};