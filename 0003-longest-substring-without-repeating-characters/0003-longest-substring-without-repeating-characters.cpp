class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> ans(256, 0);
        int l = 0, r = 0, len = 0;

        while(r < s.length()){
            while(ans[s[r]]){
               ans[s[l]] = 0;
                l++; 
            }
            ans[s[r]] = 1;
            len = max(len, r-l+1);
            r++;
        }
        return len;
    }

};