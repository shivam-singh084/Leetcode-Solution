class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result = "";
        string token = "";
        while(ss >> token){
            result = token + " " + result;
        }
        return result.substr(0, result.length()-1);
    }
};