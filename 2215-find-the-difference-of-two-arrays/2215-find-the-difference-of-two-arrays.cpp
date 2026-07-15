class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;

        for(int i = 0; i < nums1.size(); i++){
            mp1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            mp2[nums2[i]]++;
        }
        vector<int> ans1, ans2;

        for(auto it : mp1){
            if(mp2.find(it.first) == mp2.end()){
                ans1.push_back(it.first);
            }
        }
        for(auto it : mp2){
            if(mp1.find(it.first) == mp1.end()){
                ans2.push_back(it.first);
            }
        }
        return {ans1, ans2};

    }
};