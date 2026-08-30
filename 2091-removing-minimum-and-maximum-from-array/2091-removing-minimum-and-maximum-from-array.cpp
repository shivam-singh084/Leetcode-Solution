class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minEleidx = min_element(nums.begin(), nums.end()) - nums.begin(); 
        int maxEleidx = max_element(nums.begin(), nums.end()) - nums.begin(); 

        int left  = min(minEleidx, maxEleidx);
        int right = max(minEleidx, maxEleidx);

        return min({left+1+n-right, right+1, n-left});
    }
};