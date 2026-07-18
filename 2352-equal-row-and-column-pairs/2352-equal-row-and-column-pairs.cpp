class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();

        int cnt = 0;
        for(int r = 0; r < n; r++){
            for(int c = 0; c < n; c++){
                bool isequal = true;
                for(int k = 0; k < n; k++){
                    if(grid[r][k] != grid[k][c]){
                        isequal = false;
                        break;
                    } 
                }
                if(isequal == true) cnt++;
            }
        }
        return cnt;
    }
};