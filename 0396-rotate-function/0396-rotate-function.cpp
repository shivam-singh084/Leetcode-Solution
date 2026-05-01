class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        int f = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];
            f += i * nums[i];
        }
        int ans = f;
        for(int k = 0; k <= n-1; k++){
            int newf = f + sum - n*nums[n-1-k];
            ans = max(ans, newf);
            f = newf;
        }
        return ans;
    }
};