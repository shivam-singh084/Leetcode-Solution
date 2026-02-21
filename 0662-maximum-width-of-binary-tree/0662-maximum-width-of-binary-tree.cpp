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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        long long maxwidth = 0;

        while(!q.empty()){
            
            long long l = q.front().second;
            long long r = q.back().second;

            long long base = q.front().second;
            long long first = 0, last = 0;

            
            int n = q.size();

            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front().first;
                long long idx = q.front().second - base;
                q.pop();
                if (i == 0) first = idx;
                if (i == n - 1) last = idx;

                if(curr -> left != NULL) q.push({curr -> left, 2*idx+1});
                if(curr -> right != NULL) q.push({curr -> right, 2*idx+2});
            }
            maxwidth = max(maxwidth, r-l+1);

        }
        return maxwidth;
    }
};