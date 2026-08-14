class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int i = 0;
        int ans = 0;
        for(int j = 0; j < n; j++){
            mp[s[j]]++;

            while(j < n && mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};