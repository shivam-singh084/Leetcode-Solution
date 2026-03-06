class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();
        int i = 0; 
        while(i < n-1){
            if(s[i] == '0' && s[i+1] == '1'){
                return false;
            }
            i++;
        }
        return true;
    }
};