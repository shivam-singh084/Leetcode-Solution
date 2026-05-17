class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        if(nums[st] <= nums[end]) return nums[0];
        while(st < end){
            int mid = (st + end)/2;

            if(nums[mid] > nums[mid+1]){
                return nums[mid+1];
            }
            if(nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            
            if(nums[st] <= nums[mid]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
            
        }
        return -1;
    }
};