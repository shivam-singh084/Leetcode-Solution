class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int m = encodedText.length();
        int n = m / rows;

        string original;
        for(int j = 0; j < n; j++){
            for(int i = j; i < m; i += (n+1)){
                original += encodedText[i];
            }
        }
        while(!original.empty() && original.back() == ' '){
            original.pop_back();
        }
        return original;
    }
};