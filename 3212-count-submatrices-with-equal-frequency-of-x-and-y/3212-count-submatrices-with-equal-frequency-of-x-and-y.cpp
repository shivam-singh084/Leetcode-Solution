class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> sumX(n, vector<int>(m, 0));
        vector<vector<int>> sumY(n, vector<int>(m, 0));

        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                sumX[i][j] = (grid[i][j] == 'X');
                sumY[i][j] = (grid[i][j] == 'Y');

                if(i - 1 >= 0){
                    sumX[i][j] += sumX[i-1][j]; 
                    sumY[i][j] += sumY[i-1][j];
                }
                if(j - 1 >= 0){ 
                    sumX[i][j] += sumX[i][j-1]; 
                    sumY[i][j] += sumY[i][j-1];
                }
                if(i-1 >= 0 && j-1 >= 0){ 
                    sumX[i][j] -= sumX[i-1][j-1]; 
                    sumY[i][j] -= sumY[i-1][j-1];
                }
                if(sumX[i][j] == sumY[i][j] && sumX[i][j] > 0) {
                    cnt++;
                }
                
            }
            
        }
        return cnt;
    }
}; 