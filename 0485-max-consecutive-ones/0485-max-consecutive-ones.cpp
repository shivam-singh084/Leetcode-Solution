class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int cnt = 0;
        int maxOnes = 0;

        while(j < n){
            if(nums[j] == 1){
                cnt++;
                maxOnes = max(maxOnes, cnt);
            }
            if(nums[j] == 0){  
                cnt = 0;
            }
            j++;
        }
        return maxOnes;
    }
};