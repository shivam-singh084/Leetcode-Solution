class Solution {
public:
    const int M = 1e9+7;
    int findPow(long long a, long long b){
        if(b == 0) return 1;
        long long half = findPow(a, b/2);
        long long res = (half * half) % M;
        if(b % 2 == 1) res = (res * a) % M;

        return res;
    }
    int countGoodNumbers(long long n) {
        return (long long)findPow(5, (n+1)/2) * findPow(4, n/2) % M;
    }
};