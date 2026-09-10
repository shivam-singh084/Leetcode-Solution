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
    int solve(TreeNode* root, int &cnt){
        if(root == NULL) return 0;
        
        int leftCnt = 0;
        int rightCnt = 0;
        int l = solve(root -> left, leftCnt);
        int r = solve(root -> right, rightCnt);
        
        cnt = leftCnt + rightCnt + 1;

        int totalSum = l + r + root -> val;
        if(totalSum / cnt == root -> val){
            res++;
        }
        return totalSum;
    }
    int averageOfSubtree(TreeNode* root) {
        res = 0;
        int cnt = 0;
        solve(root, cnt);
        return res;
    }
};