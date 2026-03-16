class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        set<int> st;

        auto addset = [&](int sum){
            st.insert(sum);
            if(st.size() > 3){
                st.erase(begin(st));
            }
        };

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                addset(grid[i][j]);

                for(int side = 1; i-side >= 0 && i+side < m && j-side >= 0 && j+side < n; side++){
                    int sum = 0;
                    for(int k = 0; k <=side-1; k++){
                        sum += grid[i-side+k][j+k];
                        sum += grid[i+k][j+side-k];
                        sum += grid[i+side-k][j-k];
                        sum += grid[i-k][j-side+k];
                    }
                    addset(sum);
                }
            }
        }
        return vector<int>(rbegin(st), rend(st));
    }
};