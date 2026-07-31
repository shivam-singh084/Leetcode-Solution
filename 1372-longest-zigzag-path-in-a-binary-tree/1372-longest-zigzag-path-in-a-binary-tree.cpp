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
    int maxLen = 0;
    void solve(TreeNode* root, int step, bool goLeft){
        if(root == NULL) return;
        maxLen = max(maxLen, step);
        if(goLeft == true){
            solve(root -> left, step+1, false);
            solve(root -> right, 1, true);
        }else{
            solve(root -> right, step+1, true);
            solve(root -> left, 1, false);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root, 0, true);
        solve(root, 0, false);
        return maxLen;
    }
};