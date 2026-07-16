class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int zero = 0, maxLen = 0;

        for(int j = 0; j < n; j++){
            if(nums[j] == 0) zero++;
            while(zero > 1){
                if(nums[i] == 0){
                    zero--;
                }
                i++;
            }
            maxLen = max(maxLen, j-i);
        }
        return maxLen;
    }
};