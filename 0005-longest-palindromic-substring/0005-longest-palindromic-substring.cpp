class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = INT_MIN;
        int st = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(isPalindrome(s, i, j) == true){
                    if(j - i + 1 > maxlen){
                        maxlen = j - i + 1;
                        st = i;
                    }
                    
                }
            }
        }
        return s.substr(st, maxlen);
    }
};