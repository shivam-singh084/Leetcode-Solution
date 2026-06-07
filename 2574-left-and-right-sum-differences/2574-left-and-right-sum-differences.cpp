class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n+1, 0);
        vector<int> right(n+1, 0);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            left[i+1] = left[i]+nums[i];
        }
        for(int i = n-1; i >= 0; i--){
            right[i] = right[i+1]+nums[i];
        }
        for(int i = 0; i < n; i++){
            ans[i] = abs(left[i+1] - right[i]);
        }
        return ans;
    }
};