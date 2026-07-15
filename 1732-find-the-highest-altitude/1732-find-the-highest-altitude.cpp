class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        int maxAlt = 0;
        for(int i = 0; i < n; i++){
            sum += gain[i];
            maxAlt = max(maxAlt, sum);
        }
        return maxAlt;
    }
};