class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mp;

        for(char ch : word){
            mp[ch]++;
        }
        int cnt = 0;
        for(char ch = 'a'; ch <= 'z'; ch++){
           if(mp[ch] > 0 && mp[toupper(ch)] > 0){
                cnt++;
            } 
        }
        return cnt;

    }
};