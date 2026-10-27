class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> dp(m, string(n, '#'));
        for(int i = 0; i < m; i++){
            dp[i][n-1] = '.';
        }
        for(int j = 0; j < n; j++){
            dp[0][j] = '.';
        }
        return dp;
    }
};