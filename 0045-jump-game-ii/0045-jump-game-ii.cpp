class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0;
        int fast = 0;
        int end = 0;

        for(int  i = 0; i < n-1; i++){
            fast = max(fast, i + nums[i]);
            if(i == end){
                jump++;
                end = fast;
            }
        }
        return jump;
        
        
    }
};