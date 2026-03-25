class Solution {
public:
    int solve(vector<int>& nums, int i, vector<int>& dp, int n){
        if(i >= n){
            return 0;
        }
        if(dp[i] != -1) return dp[i];
        int steal = nums[i] + solve(nums, i+2, dp, n);
        int skip  = solve(nums, i+1, dp, n);

        return dp[i] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(nums, 0, dp, n);
    }
};