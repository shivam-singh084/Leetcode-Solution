class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                if(!st.empty()){
                    ans += s[i];
                }

                st.push(s[i]);
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};