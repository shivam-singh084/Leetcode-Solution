class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 1){
                cnt = 0;
                curr = max(curr, cnt);
            }else{
                cnt++;
                curr = max(curr, cnt);
            }
        }
        return curr;
    }
};