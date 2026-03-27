class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        k = k % n;
        if(k == 0) return true;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int currInd = j;
                int futureInd;

                if(i % 2 == 0){
                    futureInd = (j + k) % n;
                }
                else{
                    futureInd = (j - k + n) % n;
                }

                if(mat[i][currInd] != mat[i][futureInd]){
                    return false;
                }
            }
        }
        return true;
    }
};