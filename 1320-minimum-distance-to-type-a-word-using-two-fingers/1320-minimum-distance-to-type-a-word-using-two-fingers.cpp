class Solution {
public:
    int dp[301][27][27];
    pair<int, int> getCoord(int pos) {
        return {pos/6, pos%6};
    }

    int getDistance(int pos1, int pos2) {
        auto[x1, y1] = getCoord(pos1);
        auto[x2, y2] = getCoord(pos2);
        return abs(x1 - x2) + abs(y1-y2);
    }

    int solve(string &word, int i, int f1, int f2) {
        if(i >= word.length())
            return 0;
        
        int curr = word[i] - 'A';

        if(dp[i][f1][f2] != -1) {
            return dp[i][f1][f2];
        }

        if(f1 == 26 && f2 == 26) {
            return dp[i][f1][f2] = solve(word, i+1, curr, f2);
        }

        if(f2 == 26) {
            int moveF2 = solve(word, i+1, f1, curr);
            int moveF1 = getDistance(f1, curr) + solve(word, i+1, curr, f2);

            return dp[i][f1][f2] = min(moveF1, moveF2);
        }

        int moveF1 = getDistance(f1, curr) + solve(word, i+1, curr, f2);


        int moveF2 = getDistance(f2, curr) + solve(word, i+1, f1, curr);

        return dp[i][f1][f2] = min(moveF1, moveF2);
    }
    int minimumDistance(string word) {
        memset(dp, -1, sizeof(dp));
        return solve(word, 0, 26, 26);
    }
};