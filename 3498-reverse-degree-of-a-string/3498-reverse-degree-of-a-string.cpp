class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();

        int sum = 0;
        for(int i = 0; i < n; i++){
            int digit = 'z' - s[i]+1;
            int pro = (i+1) * digit;
            sum += pro;
        }
        return sum;
    }
};