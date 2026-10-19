class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        long long cnt = 0;
        int cnta = 0, cntb = 0, cntc = 0;
        int i = 0;

        for(int j = 0; j < n; j++){
            if(s[j] == 'a') cnta++;
            else if(s[j] == 'b') cntb++;
            else cntc++;

            while(cnta > 0 && cntb > 0 && cntc > 0){
                cnt += n-j;
    
                if(s[i] == 'a') cnta--;
                else if(s[i] == 'b') cntb--;
                else cntc--;
                i++;
            }
            
        }
        return cnt;
    }
};