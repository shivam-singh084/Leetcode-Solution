class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if(i - 1 >= 0) grid[i][j] += grid[i-1][j];
                if(j - 1 >= 0) grid[i][j] += grid[i][j-1]; 
                if(i - 1 >= 0 && j-1 >= 0) grid[i][j] -= grid[i-1][j-1];

                if(grid[i][j] <= k){
                    cnt++;
                }else{
                    break;
                }
            }
            
        }
        return cnt;
    }
};