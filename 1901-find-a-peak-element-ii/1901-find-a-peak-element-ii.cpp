class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int st = 0; 
        int end = m-1;
        while(st <= end){
            int mid = st + (end - st)/2;

            int maxrow = 0;
            for(int i = 0; i < n; i++){
                if(mat[i][mid] > mat[maxrow][mid]){
                    maxrow = i;
                }
            }

            int left, right;
            if((mid-1) >= 0){
                left = mat[maxrow][mid-1];
            }else{
                left = -1;
            }

            if((mid+1) < m){
                right = mat[maxrow][mid+1];
            }else{
                right = -1;
            }
            if(mat[maxrow][mid] > left && mat[maxrow][mid] > right){
                return {maxrow, mid};
            }else if(left > mat[maxrow][mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return {-1, -1};
    }
};