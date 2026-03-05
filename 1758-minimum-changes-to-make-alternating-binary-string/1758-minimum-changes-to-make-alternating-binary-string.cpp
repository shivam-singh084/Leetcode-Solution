class Solution {
public:
    int minOperations(string s) {
        int minop = 0;
        int n = s.length();
        int i = 1;
        int j = i-1;
        while(i < n){
            if(s[i] == s[j]){
                if(s[i] == '0'){
                    s[i] = '1';
                }
                else{
                    s[i] = '0';
                }
                minop++;
            }
            i++;
            j++;
        }
        return min(minop, n-minop);
    }
};