class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> endZeroes(n);

        for(int i = 0; i < n; i++){
            for(int j = n-1; j >= 0 && grid[i][j] == 0; j--){
                endZeroes[i]++;
            }
        }
        int swaps = 0;
        for(int i = 0; i < n; i++){
            int need = n - i - 1;

            int j = i;
            while(j < n && endZeroes[j] < need){
                j++;
            }
            if(j == n) return -1;

            while (j > i) {
                swap(endZeroes[j], endZeroes[j - 1]);
                swaps++;
                j--;
            }
        }
        return swaps;
    }
};