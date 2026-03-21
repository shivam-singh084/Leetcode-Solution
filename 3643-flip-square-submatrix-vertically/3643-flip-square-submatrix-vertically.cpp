class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int stRow = x;
        int endRow = x+k-1;
        int stCol = y;
        int endCol = y+k-1;

        for(int i = stRow; i <= endRow; i++){
            for(int j = stCol; j <= endCol; j++){
                swap(grid[i][j], grid[endRow][j]);
            }
            endRow--;
        }
        return grid;
    }
};