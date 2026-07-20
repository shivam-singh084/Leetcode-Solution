class Solution {
public:
    void reverse(vector<int>& ans, int i, int j){
        while(i < j){
            swap(ans[i], ans[j]);
            i++;
            j--;
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        
        vector<int> ans;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ans.push_back(grid[i][j]);
            }
        }
        
        int size = m*n;
        k = k % size;
        reverse(ans, 0, size-1);
        reverse(ans, 0, k-1);
        reverse(ans, k, size-1);

        int idx = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                grid[i][j] = ans[idx];
                idx++;
            }
        }

        return grid;
    }
};