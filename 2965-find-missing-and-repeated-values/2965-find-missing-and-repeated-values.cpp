class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int rep = -1;
        int mis = -1;
        int n = grid.size();
        int m = grid[0].size();

        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mp[grid[i][j]]++;
            }
        }

        for(int i = 1; i <= n*n; i++){
            if(mp[i] == 2) rep = i;
            if(mp[i] == 0) mis = i;
        }
        return {rep, mis};

    }
};