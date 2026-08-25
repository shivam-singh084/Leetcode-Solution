class Solution {
public:
    int n;
    int dp[10001];
    int solve(vector<int>& cost, int i){
        if(i >= cost.size()){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }

        int take_0 = cost[i] + solve(cost, i+1);
        int take_1 = cost[i] + solve(cost, i+2);
        return dp[i] = min(take_0, take_1);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        memset(dp, -1, sizeof(dp));
        return min(solve(cost, 0), solve(cost, 1));
    }
};