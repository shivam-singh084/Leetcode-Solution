class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int cnt = 0;
        int ans = INT_MIN;
        for(char ch : s){
            if(ch == '('){
                st.push(ch);
                cnt++;
                ans = max(cnt, ans);
            }
            else if(ch == ')'){
                cnt--;
                st.pop();
            }
        }
        if(ans < 0){
            ans = 0;
        }
        return ans;
    }
};