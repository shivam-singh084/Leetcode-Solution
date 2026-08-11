class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        
        int sum = nums[0];
        for(int j = 1; j < n; j++){
            if(nums[j] == nums[j-1]+1){
                sum += nums[j];
            }
            else break;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(sum == nums[i]){
                sum++;
            }
        }
        return sum;
    }
};