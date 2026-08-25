class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int n = k;
        while(mp[n] != 0){
            n = n+k;
        }
        return n;
        
    }
};