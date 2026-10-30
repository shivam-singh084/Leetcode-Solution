class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxOnes = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                maxOnes++;
                ans = max(maxOnes, ans);
            }
            else{
                maxOnes = 0;
            }
        }
        return ans;
    }
};