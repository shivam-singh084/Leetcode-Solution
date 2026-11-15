class Solution {
public:
    int M = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int even = 1;
        int odd = 0;
        int sum  = 0;
        for(int  i = 0; i < n; i++){
            sum += arr[i];

            if(sum % 2 == 0){
                cnt = (cnt + odd) % M;
                even++;
            }
            else{
                cnt = (cnt + even) % M;
                odd++;
            }
        }
        return cnt;
    }
};