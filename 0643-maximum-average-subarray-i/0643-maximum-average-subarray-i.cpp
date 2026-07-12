class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int sum = 0;
        int maxVal = INT_MIN;

        for(int j = 0; j < n; j++){
            sum += nums[j];

            if(j - i + 1 == k){
                maxVal = max(maxVal, sum);
                sum -= nums[i];
                i++;
            }
        }
        return (double)maxVal / k;
    }
};