class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int cnt = 1;

        for(int j = 1; j < nums.size(); j++){
            if(nums[j] == nums[i]){
                cnt++;
            }else{
                cnt = 1;
            }
            if(cnt <= 2){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1; 
    }
};