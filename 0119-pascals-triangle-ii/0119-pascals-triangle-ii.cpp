class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int row = rowIndex+1;
        vector<vector<int>> ans(row);
        for(int i = 0; i < row; i++){
            ans[i] = vector<int> (i+1, 1);
            for(int j = 1; j < i; j++){
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1]; 
            }
        }
        return ans[rowIndex];
    }
};