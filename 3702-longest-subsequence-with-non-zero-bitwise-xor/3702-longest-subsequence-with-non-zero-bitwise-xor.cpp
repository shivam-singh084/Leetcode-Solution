class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int x = 0;
        for(int j = 0; j < n; j++){
            x = x ^ nums[j];
        }
        if(x != 0){
            return n;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                return n-1;
            }
        }
        return 0;
    }
};