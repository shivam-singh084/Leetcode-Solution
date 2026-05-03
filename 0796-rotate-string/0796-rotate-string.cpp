class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string ss = s + s;
        for(int i = 0; i < ss.length(); i++){
            if(ss.find(goal) != -1){
                return true;
            }
        }
        return false;
    }
};