class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ones = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1){

                    int row = 0;
                    int col = 0;
                    for(int k = 0; k < n; k++){
                        row += mat[k][j];
                    }
                    for(int k = 0; k < m; k++){
                        col += mat[i][k];
                    }
                    if(col == 1 && row == 1){
                        ones++;
                    }
                }
                
            }
        }
        return ones;
    }
};