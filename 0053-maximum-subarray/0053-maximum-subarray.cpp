class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        int maxSum = INT_MIN;
        
        for(int j = 0; j < n; j++){
            sum += nums[j];
            maxSum = max(maxSum, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;
    }
};