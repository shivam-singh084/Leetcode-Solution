class Solution {
public:
    int n;
    int dp[2][101][101];
    int solveForAlice(vector<int>& piles, int person, int i, int m){
        if(i >= n) return 0;

        if(dp[person][i][m] != -1){
            return dp[person][i][m];
        }
        int res = (person == 1) ? -1 : INT_MAX;

        int stone = 0;
        for(int x = 1; x <= min(2*m, n-i); x++){
            stone += piles[i+x-1];
            if(person == 1){
                res = max(res, stone + solveForAlice(piles, 0, i+x, max(m,x)));
            }
            else{
                res = min(res, solveForAlice(piles, 1, i+x, max(m,x)));
            }
        }
        return dp[person][i][m] = res;
    }
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset(dp, -1, sizeof(dp));
        return solveForAlice(piles, 1, 0, 1);
    }
};