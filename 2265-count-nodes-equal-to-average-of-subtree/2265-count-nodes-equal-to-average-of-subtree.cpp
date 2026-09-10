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
    int res;
    int sum(TreeNode* root, int &cnt){
        if(root == NULL) return 0;
        cnt++;
        int l = sum(root -> left, cnt);
        int r = sum(root -> right, cnt);

        return l + r + root -> val;
    }
    void solve(TreeNode* root){
        if(root == NULL) return;
        int cnt = 0;
        int totalSum = sum(root, cnt);
        if(totalSum / cnt == root -> val){
            res++;
        }
        solve(root -> left);
        solve(root -> right);
    }
    int averageOfSubtree(TreeNode* root) {
        res = 0;
        solve(root);
        return res;
    }
};