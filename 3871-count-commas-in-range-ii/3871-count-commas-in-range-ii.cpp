#define ll long long
class Solution {
public:
    long long countCommas(long long n) {
        ll res = 0;
        ll lower = 1000;
        ll comma = 1;

        while(lower <= n){
            ll upper = lower*1000 - 1;
            if(upper > n){
                upper = n;
            }
            ll cntNum = upper - lower  + 1;
            res += cntNum * comma;

            lower *= 1000;
            comma += 1;

        }
        return res;
    }
};