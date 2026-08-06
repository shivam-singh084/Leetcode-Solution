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
    int maxLevelSum(TreeNode* root) {

        int maxSum = INT_MIN;
        int ans = 0;

        queue<TreeNode*> q;
        q.push(root);

        int currLevel = 1;
        while(!q.empty()){
            int n = q.size();
            TreeNode* node = NULL;
            int sum = 0;

            while(n--){
                node = q.front();
                q.pop();

                sum += node -> val;
                if(node -> left != NULL) q.push(node -> left);
                if(node -> right != NULL) q.push(node -> right);
            }
            if(sum > maxSum){
                maxSum = sum;
                ans = currLevel;
            }
            currLevel++;
        }
        return ans;
    }
};