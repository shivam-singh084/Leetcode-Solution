class Solution {
public:
    int minAddToMakeValid(string s) {
        int openBrac = 0;
        int add = 0;


        for(char ch : s){
            if(ch == '('){
                openBrac++;
            }
            else {
                if(openBrac > 0) openBrac--;
                else add++;
            }
        }
        return add + openBrac;
    }
};