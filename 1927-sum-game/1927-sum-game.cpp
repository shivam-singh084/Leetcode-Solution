class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for(int i = 0; i < n; i++){
            if(num[i] == '?'){
                if(i < n/2){
                    leftQ++;
                }
                else{
                    rightQ++;
                }
            }
            else{
                if(i < n/2){
                    leftSum += num[i] - '0';
                }
                else{
                    rightSum += num[i] - '0';
                }
            }
        }

        int totalQ = leftQ + rightQ;
        if(totalQ %2 == 1){
            return true;
        }
        int left = 2*leftSum + 9*leftQ;
        int right = 2*rightSum + 9*rightQ;
        if(left == right) return false;
        return true;
    }
};