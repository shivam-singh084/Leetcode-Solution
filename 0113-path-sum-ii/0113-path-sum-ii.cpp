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
    void inorder(TreeNode* root, vector<vector<int>>& ans, vector<int>& path, int sum, int& targetSum){
        if(root == NULL) return;
        sum += root -> val;
        path.push_back(root -> val);
        if(root -> left == NULL && root -> right == NULL){
            if(sum == targetSum){
                ans.push_back(path);
            }
        }
        inorder(root -> left, ans, path, sum, targetSum);
        inorder(root -> right, ans, path, sum, targetSum);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<vector<int>> ans;
        vector<int> path;
        inorder(root, ans, path, 0, targetSum);
        return ans;
    }
};