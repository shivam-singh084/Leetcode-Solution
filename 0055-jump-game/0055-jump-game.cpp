class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];
        for(int i = 0; i < n; i++){
            first = max(first , i + nums[i]);

            if(first >= n-1) return true;
            
            if(i == first) return false;
        }
        return true;
        
    }
};