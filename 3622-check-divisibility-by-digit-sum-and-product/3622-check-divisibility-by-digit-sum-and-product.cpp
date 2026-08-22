class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int pro = 1;
        while(n > 0){
            int digit = n%10;
            sum += digit;
            pro *= digit;
            n = n/10;
        }
        if(x % (sum + pro) == 0){
            return true;
        }
        return false;
    }
};