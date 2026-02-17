class Solution {
public:
    void solve(int n, string s, vector<string> &ans, int open, int close) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n) {
            s.push_back('(');
            solve(n, s, ans, open + 1, close);
            s.pop_back();
        }

        if (close < open) {
            s.push_back(')');
            solve(n, s, ans, open, close + 1);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, "", ans, 0, 0);
        return ans;
    }
};  
