class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0;
        int cnt = 0;
        int st = 0;
        int len = INT_MAX;

        for(int j = 0; j < n; j++) {
            if(s[j] == '1')
                cnt++;

            while(cnt == k) {

                if(j - i + 1 < len || 
                   (j - i + 1 == len && s.substr(i, len) < s.substr(st, len))) {
                    len = j - i + 1;
                    st = i;
                }
                if(s[i] == '1') cnt--;
                i++;
            }
        }
        if(len == INT_MAX)
            return "";

        return s.substr(st, len);
    }
};