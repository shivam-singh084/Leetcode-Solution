class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0;
        int cnt = 0;
        int st = 0;
        string res = "";

        for(int j = 0; j < n; j++){
            if(s[j] == '1') cnt++;

            while(cnt == k){
                string temp = s.substr(i, j-i+1);
                if(res.empty() || res.length() > j-i+1 || (temp.length() == res.length() && temp < res)){
                    res = temp;
                }
    
                if(s[i] == '1') cnt--;
                i++;
            }
        }

        return res;
    }
};