class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 2; i <= n; i++){
            string x = s;
        
            reverse(x.begin(), x.end());
        
            for(int i = 0; i < x.length(); i++){
                if(x[i] == '0'){
                    x[i] = '1';
                }else{
                    x[i] = '0';
                }
            }
            s = s + "1" + x;
        }
        return s[k-1];
    }
};