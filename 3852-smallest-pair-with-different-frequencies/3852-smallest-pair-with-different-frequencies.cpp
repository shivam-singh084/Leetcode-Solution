class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto it1 : mp){
           for(auto it2 : mp){
                if(it1.first < it2.first && it1.second != it2.second){
                    return {it1.first, it2.first};
                }
           }
        }
        return {-1, -1};
    }
};