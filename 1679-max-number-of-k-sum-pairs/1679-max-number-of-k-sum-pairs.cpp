class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int cnt = 0;
        while(i < j){
            int sum = nums[i] + nums[j];

            if(sum == k){
                cnt++;
                i++;
                j--;
            }else if(sum < k){
                i++;
            }
            else if(sum > k) j--;
        }
        return cnt;
    }
};