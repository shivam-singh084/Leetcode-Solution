class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0, zero = 0, maxLen = 0;

        while(j < n){
            if(nums[j] == 0) zero++;
            if(zero > k){
                if(nums[i] == 0) zero--;
                i++;
            }
            if(zero <= k){
                int len = j - i + 1;
                maxLen = max(maxLen, len);
            }
            j++;
        }
        return maxLen;
    }
};