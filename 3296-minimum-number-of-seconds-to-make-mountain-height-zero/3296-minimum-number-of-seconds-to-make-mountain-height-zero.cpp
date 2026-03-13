class Solution {
public:
    typedef long long ll;
    bool check(ll mid, int mountainHeight, vector<int>& workerTimes){
        ll total = 0;

        for(ll t : workerTimes){

            ll k = (sqrt(1 + 8.0 * mid / t) - 1) / 2;

            total += k;

            if(total >= mountainHeight)
                return true;
        }

        return false;
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        ll l = 0;
        ll r = 1e18;
        ll ans = r;

        while(l <= r){
            ll mid = (l+r)/2;
            if(check(mid, mountainHeight, workerTimes)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};