class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int sq = 1;
        for(int i = 0; i < n; i++){
            unordered_set<int> st;
            for(int j = i; j < n; j++){
                st.insert(nums[j]);
                cnt = st.size();
                sq += cnt * cnt;
            }   
        }
        return sq-1;
    }
};