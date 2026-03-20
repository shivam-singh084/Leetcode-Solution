class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> ans(n-k+1, vector<int>( m-k+1, 0));
        for(int i = 0; i <= n-k; i++){
            for(int j = 0; j <= m-k; j++){
                
                set<int> val;

                for(int r = i; r <= i+k-1; r++){
                    for(int c = j; c <= j+k-1; c++){
                        val.insert(grid[r][c]);
                    }
                }

                if(val.size() == 1){
                    ans[i][j] = 0;
                    continue;
                }

                int minAbsDiff = INT_MAX;
                auto prev = val.begin();
                auto curr = next(prev);

                while(curr != val.end()){
                    minAbsDiff = min(minAbsDiff, *curr - *prev);
                    prev = curr;
                    curr++;
                }

                ans[i][j] = minAbsDiff;
            }
        }
        return ans;
    }
};