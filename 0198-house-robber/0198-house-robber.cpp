class Solution {
public:
    int dp[101];
    int solve(vector<int>& nums, int i){
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int take_i = nums[i] + solve(nums, i+2);
        int not_take_i = solve(nums, i+1);
        return dp[i] = max(take_i, not_take_i);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0);
    }
};