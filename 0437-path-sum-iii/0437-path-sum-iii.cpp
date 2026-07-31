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
    int inorder(TreeNode* root, long long sum){
        if(root == NULL) return 0;
        int cnt = 0;
        if(root -> val == sum) cnt++;

        cnt += inorder(root -> left, sum - root -> val);
        cnt += inorder(root ->  right, sum - root -> val);

        return cnt;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;

        return inorder(root, targetSum) + pathSum(root -> left, targetSum) + pathSum(root -> right, targetSum);
    }
};