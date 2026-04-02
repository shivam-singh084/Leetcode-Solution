class Solution {
public:
    int solve(vector<vector<int>>& coins, int i, int j, int k, int m, int n, vector<vector<vector<int>>>& dp){
        if(i < 0 || j < 0 || i >= m || j >= n){
            return INT_MIN;
        }

        if(i == m-1 && j == n-1){
            if(coins[i][j] < 0 && k > 0) return 0;
            return coins[i][j]; 
        }

        if(dp[i][j][k] != INT_MIN){
            return dp[i][j][k];
        }
        
        int take = coins[i][j] + max(solve(coins, i, j+1, k, m, n, dp),
                                     solve(coins, i+1, j, k, m, n, dp));

        int skip = INT_MIN;
        if(coins[i][j] < 0 && k > 0){
            skip =  max(solve(coins, i, j+1, k-1, m, n, dp), solve(coins, i+1, j, k-1, m, n, dp));
        } 
        
        return dp[i][j][k] = max(take, skip);
    }
    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();
        int n = coins[0].size();

        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(3, INT_MIN)));
        return solve(coins, 0, 0, 2, m, n, dp);
    }
};