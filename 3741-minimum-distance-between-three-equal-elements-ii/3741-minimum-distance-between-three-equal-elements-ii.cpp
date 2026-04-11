class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto &it : mp){
            if(it.second.size() >= 3){
                vector<int> &z = it.second;
                for(int t = 0; t+2 < z.size(); t++){
                    ans = min(ans, 2 * abs(z[t+2] - z[t]));
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};