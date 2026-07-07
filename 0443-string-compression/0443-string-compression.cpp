class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;
        while(i < n){
            char curr_char = chars[i];
            int cnt = 0;
            while(i < n && chars[i] == curr_char){
                cnt++;
                i++;            
            }

            chars[index] = curr_char;
            index++;
            if(cnt > 1){
                string cnt_str = to_string(cnt);
                for(char ch : cnt_str){
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};