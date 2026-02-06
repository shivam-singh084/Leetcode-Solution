class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];

        string ans = "";
        for(int i = 0; i < min(first.length(), last.length()); i++){
            if(first[i] != last[i]){
                break;
            }
            else{
                ans = ans + first[i];
            }
        }
        return ans;
    }
};