class Solution {
public:
    bool solve(vector<int>& nums, int n, int idx, vector<int>& dp){

        if(idx == n-1) return true;

        if(dp[idx] != -1) return dp[idx];

        for(int jump = 1; jump <= nums[idx]; jump++){
            if(solve(nums, n, idx + jump, dp)){
                return dp[idx] = true;
            }
        }
        return dp[idx] = false;
        
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        return solve(nums, n, 0, dp);
    }
};