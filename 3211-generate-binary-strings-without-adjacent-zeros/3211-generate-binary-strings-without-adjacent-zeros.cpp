class Solution {
public:
    void solve(int n, string s, vector<string>& res){
        if(s.length() == n){
            res.push_back(s);
            return;
        }
        solve(n, s + '1', res);
        if(s.empty() || s.back() != '0'){
            solve(n, s + '0', res);
        }
    }
    vector<string> validStrings(int n) {
        vector<string> res;
        solve(n, "", res);
        return res;
    }
};