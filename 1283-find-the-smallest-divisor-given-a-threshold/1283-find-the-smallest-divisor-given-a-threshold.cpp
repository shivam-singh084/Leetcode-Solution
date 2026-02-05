class Solution {
public:
    int divisiorFinder(vector<int>& nums, int mid){
        int sum = 0;
        for(int x : nums){
            sum += x/mid;
            if(x%mid != 0){
                sum++;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int st = 1;
        int end = *max_element(nums.begin(), nums.end());

        while(st < end){
            int mid = st + (end-st)/2;
            if(divisiorFinder(nums, mid) <= threshold){
                end = mid;
            }
            else{
                st = mid + 1;
            }
        }
        return st;
    }
};