class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        
        int mini = *min_element(nums.begin(), nums.end());
        long long cnt = 0;

        for(int i = 0; i < n; i++){
            
            cnt += nums[i] - mini;
        }
        return cnt;
    }
};