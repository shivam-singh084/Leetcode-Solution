class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        vector<pair<int, char>> v;
        for(auto it : mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());

        string ans = "";
        for(int i = v.size()-1;i >=0; i--){
            ans += string(v[i].first, v[i].second);
        }
        return ans;
    }
};