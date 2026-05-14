class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int maxEle = *max_element(nums.begin(), nums.end());
        int cnt = count(nums.begin(), nums.end(), maxEle);

        sort(nums.begin(), nums.end());
        for(int i = 0; i < maxEle-1; i++) {
            if(nums[i] != i+1)
                return false;
        }
        if(n == maxEle + 1 && cnt == 2){
            return true;
        }
        return false;
    }
};