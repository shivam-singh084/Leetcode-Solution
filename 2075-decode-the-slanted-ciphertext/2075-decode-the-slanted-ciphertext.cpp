class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int l = encodedText.length();
        int cols = l / rows;

        vector<vector<char>> mat(rows, vector<char>(cols));
        int idx = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = encodedText[idx];
                idx++;
            }
        }

        string ans = "";
        for(int col = 0; col < cols; col++){
            int i = 0, j = col;
            while(i < rows && j < cols){
                ans += mat[i][j];
                i++;
                j++;
            }
        }
        while(!ans.empty() && ans.back() == ' ') ans.pop_back();
        return ans;
    }
};