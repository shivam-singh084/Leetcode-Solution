class Solution {
public:
    int n;
    int dp[50001];
    int solve(vector<int>& stoneValue, int i){
        if(i >= n) return 0;

        if(dp[i] != -1) return dp[i];
        int res = stoneValue[i] - solve(stoneValue, i+1);
        if(i+1 < n){
            res = max(res, stoneValue[i] + stoneValue[i+1] - solve(stoneValue, i+2));
        }
        if(i+2 < n){
            res = max(res, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - solve(stoneValue, i+3));
        }
        
        
        return dp[i] = res;

    }
    string stoneGameIII(vector<int>& stoneValue) {
        n = stoneValue.size();
        memset(dp, -1, sizeof(dp));
        int diff = solve(stoneValue, 0);
        if(diff > 0) return "Alice";
        else if(diff < 0) return "Bob";
        return "Tie";
    }
};