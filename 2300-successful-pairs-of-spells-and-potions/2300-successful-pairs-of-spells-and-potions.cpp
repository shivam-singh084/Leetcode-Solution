class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans;
        for(int i  = 0; i < n; i++){
            int st = 0;
            int end = m-1;
            int idx = m;
            while(st <= end){
                int mid = st + (end - st)/2;
                if((long long)potions[mid]*spells[i] >= success){
                    idx = mid;
                    end = mid -1;
                }
                else{
                    st = mid +1 ;
                }
            }
            ans.push_back(m - idx);
        }
        return ans;
    }
};