class Solution {
public:
    bool isVowels(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i < j){
            while(i < j && isVowels(s[i]) && isVowels(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            while( i < j && !isVowels(s[i])){
                i++;
            }
            while(i < j && !isVowels(s[j])){
                j--;
            }
        }
        return s;
    }
};