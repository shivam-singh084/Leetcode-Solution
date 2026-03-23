class Solution {
public:
    typedef long long ll;
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size();
        int mod = 1e9+7;

        vector<vector<ll>> maxDP(n, vector<ll>(m));
        vector<vector<ll>> minDP(n, vector<ll>(m));

        maxDP[0][0] = minDP[0][0] = grid[0][0];

        
        for(int i = 1; i < n; i++){
            maxDP[i][0] = minDP[i][0] = maxDP[i-1][0] * grid[i][0];
        }

        
        for(int j = 1; j < m; j++){
            maxDP[0][j] = minDP[0][j] = maxDP[0][j-1] * grid[0][j];
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                ll a = maxDP[i-1][j] * grid[i][j];
                ll b = minDP[i-1][j] * grid[i][j];
                ll c = maxDP[i][j-1] * grid[i][j];
                ll d = minDP[i][j-1] * grid[i][j];

                maxDP[i][j] = max({a, b, c, d});
                minDP[i][j] = min({a, b, c, d});
            }
        }

        return maxDP[n-1][m-1] < 0 ? -1 : maxDP[n-1][m-1] % mod;
    }
};