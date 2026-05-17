class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;
        while(st < end){
            int mid = st + (end - st)/2;

            if(nums[mid] > nums[end]){
                st = mid+1;
            }else{
                end--;
            }
        }
        return nums[st];
    }
};