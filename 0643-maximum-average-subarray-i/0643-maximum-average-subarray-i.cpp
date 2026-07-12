class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int sum = 0;
        int maxSum = INT_MIN;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            
            if(j - i + 1 == k){
                maxSum = max(maxSum, sum);
                sum -= nums[i];
                i++;
            }
        }
        return (double)maxSum/k;
    }
}; 