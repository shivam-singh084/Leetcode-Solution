class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& piles, int i, int j){
        if(i > j) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int take_i = piles[i] + min(solve(piles, i+2, j), solve(piles, i+1, j-1));
        int take_j = piles[j] + min(solve(piles, i, j-2), solve(piles, i+1, j-1));

        return dp[i][j] = max(take_i, take_j);

    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        memset(dp, -1, sizeof(dp));
        int sum = accumulate(piles.begin(), piles.end(), 0);
        int alice = solve(piles, 0, n-1);
        return alice > sum/2;
    }
};