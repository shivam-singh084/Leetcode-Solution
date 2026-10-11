class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while(i < n && s[i] == ' ') i++;
        
        int sign = 1;
        if(i < n && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+') i++;

        long long num = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';
            num = num * 10 + digit;  

            if(num > INT_MAX && sign == 1){
                return INT_MAX;
            }
            else if(num > 2147483648LL && sign == -1) return INT_MIN;

            i++;
        }

        return num * sign;
    }
};