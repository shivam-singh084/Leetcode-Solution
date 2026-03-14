class Solution {
public:
    void solve(string curr, vector<string>& ans, int n){
        if(curr.length() == n){
            ans.push_back(curr);
            return;
        }
        for(char ch = 'a'; ch <= 'c'; ch++){
            if(!curr.empty() && curr.back() == ch) continue;

            curr.push_back(ch);

            solve(curr, ans, n);

            curr.pop_back();

        }
    }
    string getHappyString(int n, int k) {
        string curr = "";
        vector<string> ans;
        solve(curr, ans, n);
        if(ans.size() < k) return "";
        return ans[k-1];
    }
};