class Solution {
public:
    bool solve(vector<int>& nums, int i, int sum, vector<vector<int>>& dp){

        if(sum == 0) return true;
        if(i >= nums.size()) return false;

        if(dp[i][sum] != -1) return dp[i][sum];

        int take = false;
        if(nums[i] <= sum){
            take = solve(nums, i+1, sum - nums[i], dp);
        }

        int skip = solve(nums, i+1, sum, dp);

        return dp[i][sum] = take || skip;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int s = accumulate(nums.begin(), nums.end(), 0);

        if(s % 2 != 0) return false;

        int sum = s / 2;

        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        return solve(nums, 0, sum, dp);
    }
};