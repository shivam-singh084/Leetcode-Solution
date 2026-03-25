class Solution {
public:
    typedef long long ll;
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<ll> rowSum(n, 0);
        vector<ll> colSum(m, 0);

        ll total = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                total += grid[i][j];

                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }
        ll upper = 0;
        for(int i = 0; i < n-1; i++){
            upper += rowSum[i];
            if(upper == total - upper) return true;
        }

        ll left = 0;
        for(int j = 0; j < m-1; j++){
            left += colSum[j];
            if(left == total - left) return true;
        }

        return false;
    }
};