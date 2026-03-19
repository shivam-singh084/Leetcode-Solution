class Solution {
public:
    typedef long long ll;
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
            
        ll a = abs((ll)dividend);
        ll b = abs((ll)divisor);

        ll res = 0;

        while(a >= b){

            int shift = 0;

            while(a >= (b << shift))
                shift++;

            shift--;

            res += (1 << shift);
            a -= (b << shift);
        }

        if((dividend < 0) ^ (divisor < 0)){
            res = -res;
        }
            

        return res;
    }
};