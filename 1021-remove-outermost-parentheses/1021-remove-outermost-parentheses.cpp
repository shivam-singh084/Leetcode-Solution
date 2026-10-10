class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string str = "";
        for(char ch : s){
            if(st.empty() && ch == '('){
                st.push(ch);
            }
            else if(!st.empty() && st.top() == '(' && ch == '('){
                str.push_back(ch);
                st.push(ch);
            }
            else if(!st.empty() && ch == ')'){
                st.pop();
                if(!st.empty())
                    str.push_back(ch);
            }
        }
        return str;
    }
};