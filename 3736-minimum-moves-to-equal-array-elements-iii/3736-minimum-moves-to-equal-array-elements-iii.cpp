class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int cnt = 0;

        for(int i = 0; i < n; i++){
            int j = nums[i];
            while(j != maxi){
                cnt++;
                j = j+1;
            }
        }
        return cnt;
    }
};