class Solution {
public:
    vector<int> dp;
    int solve(int i, int n, vector<int>& costs){
        if(i == n) return 0;

        if(dp[i] != -1){
            return dp[i];
        }
        int cost = INT_MAX; 

        int j = i+1;
        if(j <= n){
            cost = costs[j-1] + (j-i)*(j-i) + solve(j, n, costs);
        }
        j = i+2;
        if(j <= n){
            cost = min(cost, costs[j-1] + (j-i)*(j-i) + solve(j, n, costs));
        }
        j = i+3;
        if(j <= n){
            cost = min(cost, costs[j-1] + (j-i)*(j-i) + solve(j, n, costs));
        }
        return dp[i] = cost;
    }
    int climbStairs(int n, vector<int>& costs) {
        dp.assign(n+1, -1);
        return solve(0, n, costs);
    }
};