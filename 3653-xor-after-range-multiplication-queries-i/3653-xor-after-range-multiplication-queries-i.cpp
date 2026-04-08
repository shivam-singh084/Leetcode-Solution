class Solution {
public:
    typedef long long ll;
    int m = 1e9 + 7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto &i : queries){
            int l = i[0];
            int r = i[1];
            int k = i[2];
            int v = i[3];

            while(l <= r){
                nums[l] = (1ll * nums[l] * v) % m;
                l += k;
            }
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }

        return ans;
    }
};