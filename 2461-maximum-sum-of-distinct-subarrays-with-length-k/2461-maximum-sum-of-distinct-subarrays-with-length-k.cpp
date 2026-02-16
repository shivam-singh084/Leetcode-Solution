class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long windowSum = 0, maxSum = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            windowSum += nums[j];
            freq[nums[j]]++;

            
            if (j - i + 1 > k) {
                windowSum -= nums[i];
                freq[nums[i]]--;
                if (freq[nums[i]] == 0)
                    freq.erase(nums[i]);
                i++;
            }

            
            if (j - i + 1 == k && freq.size() == k) {
                maxSum = max(maxSum, windowSum);
            }
        }

        return maxSum;
    }
};
