class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        k = k%n;


        vector<vector<int>> original = mat;
        for(int i = 0; i < m; i++){
            if(m % 2 == 0){
                rotate(rbegin(mat[i]), rbegin(mat[i])+k, rend(mat[i]));
            }
            else{
                rotate(begin(mat[i]), begin(mat[i])+k, end(mat[i]));
            }
        }
        if(original == mat){
            return true;
        }
        else{
            return false;
        }
    }
};