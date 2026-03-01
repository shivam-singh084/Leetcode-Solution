class Solution {
public:
    int minPartitions(string n) {
        char max = '0';
        for(char ch : n){
            if(ch > max){
                max = ch;
            }
        }
        return max - '0';
    }
};