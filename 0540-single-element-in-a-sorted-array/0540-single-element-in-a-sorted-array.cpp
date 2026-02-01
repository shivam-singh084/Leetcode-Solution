class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0; 
        int end = nums.size()-1;

        while(st < end){
            int mid = st + (end-st)/2;

            bool isEven;
            if((end - mid) % 2 == 0){
                isEven = true;
            }
            else{
                isEven = false;
            }

            if(nums[mid] == nums[mid+1]){
                if(isEven){
                    st = mid+2;
                }else{
                    end = mid -1;
                }
            }
            else{
                if(isEven){
                    end = mid;
                }
                else{
                    st = mid+1;
                }
            }
        }
        return nums[end];
    }
};