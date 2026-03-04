class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ones = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1){
                    bool special = true;

                    for(int k = 0; k < n; k++){
                        if(mat[k][j] == 1 && k != i){
                            special = false;
                        }
                    }

                    for(int k = 0; k < m; k++){
                        if(mat[i][k] == 1 && k != j){
                            special = false;
                        }
                    }
                    if(special == true){
                        ones++;
                    }
                }
            }
        }
        return ones;
    }
};