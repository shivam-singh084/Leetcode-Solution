class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int first = INT_MAX;
        int second = INT_MAX;
        for(int k = 0; k < n; k++){
            if(nums[k] <= first){
                first = nums[k];
            }
            else if(nums[k] <= second){
                second = nums[k];
            }
            else{
                return true;
            }
        }
        return false;
    }
};