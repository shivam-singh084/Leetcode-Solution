class Solution {
public:
    int cnt = 0;
    int  check(string &s, int i, int j, int n){
        
        while(i >= 0 && j < n && s[i] == s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n = s.length();
        cnt = 0;
        for(int i = 0; i < n; i++){
            check(s, i, i, n);
            check(s, i, i+1, n);
        }
        return cnt;
    }
};