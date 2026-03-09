class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        int ans = 0;
        bool oddFreq = false;
        for(auto &it : mp){
            if(it.second % 2 == 0) ans += it.second;
            else{
                ans += it.second-1;
                oddFreq = true;
            }
        }
        if(oddFreq){
            ans++;
        }
        return ans;
    }
};