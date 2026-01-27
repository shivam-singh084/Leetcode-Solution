class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for(int i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            if(mp[it.first] > nums.size()/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};