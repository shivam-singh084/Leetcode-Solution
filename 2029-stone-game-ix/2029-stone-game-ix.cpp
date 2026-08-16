class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zero = 0;
        int one = 0;
        int two = 0;

        for (int stone : stones) {
            int rem = stone % 3;

            if (rem == 0) {
                zero++;
            } else if (rem == 1) {
                one++;
            } else {
                two++;
            }
        }

        if (zero % 2 == 0) {
            if (one > 0 && two > 0) {
                return true;
            } else {
                return false;
            }
        }

        if (abs(one - two) > 2) {
            return true;
        }

        return false;
    }
};