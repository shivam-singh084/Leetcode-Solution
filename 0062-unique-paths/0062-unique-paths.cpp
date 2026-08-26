class Solution {
public:
    int dp[1001][1001];
    int solve(int& m, int& n, int i, int j){
        if(i == m-1 && j == n-1) return 1;
        if(i < 0 || i >= m || j < 0 || j >= n) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int right = solve(m, n, i, j+1);
        int down = solve(m, n, i+1, j);
        return dp[i][j] = right + down;
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return solve(m, n, 0, 0);
    }
};