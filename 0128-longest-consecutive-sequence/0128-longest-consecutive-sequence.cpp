class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
         
        int cnt = 1;
        int ans = 0;
        for(int i = 1; i < n; i++){
            if((nums[i] - nums[i-1]) == 1){
                cnt++;
            }
            else if((nums[i] - nums[i-1]) == 0) continue;
            else{
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};