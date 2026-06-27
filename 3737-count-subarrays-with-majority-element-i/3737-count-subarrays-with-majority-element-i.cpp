class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
    
            for(int j = i; j < n; j++){
                cnt += (nums[j] == target ? 1 : 0);
                if(cnt > (j-i+1)/2) result++;
            }
        }
        return result;

    }
};