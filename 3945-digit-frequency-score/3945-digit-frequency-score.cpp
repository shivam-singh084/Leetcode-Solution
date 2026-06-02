class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        unordered_map<int, int> mp;
        for(char ch : s){
            mp[ch-'0']++;
        }
        int score = 0; 
        for(auto it : mp){
            score += it.first * it.second;
        }
        return score;
    }
};