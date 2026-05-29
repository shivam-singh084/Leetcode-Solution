class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            int sum = 0;
            while(nums[i] > 0){
                sum += nums[i] % 10;
                nums[i] /= 10;
            }
            ans = min(sum, ans);             
        }
        return ans;
    }
};