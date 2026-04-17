class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int mini = INT_MAX;

        for(int j = 0; j < n; j++){
            string s = to_string(nums[j]);
            reverse(s.begin(), s.end());
            int rev = stoi(s);
            if(mp.find(nums[j]) != mp.end()){
                mini = min(mini, j - mp[nums[j]]);
            }
            
            mp[rev] = j;
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};