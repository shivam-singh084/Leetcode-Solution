class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int minEl = INT_MAX;
            int maxEl = INT_MIN;

            for(int j = 0; j <= i; j++){
                maxEl = max(maxEl, nums[j]);
            }
            for(int j = i; j < n; j++){
                minEl = min(minEl, nums[j]);
            }

            if(maxEl - minEl <= k){
                return i;
            }
        }
        return -1;
    }
};