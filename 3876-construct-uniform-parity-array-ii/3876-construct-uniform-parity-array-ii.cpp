class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEl = *min_element(nums1.begin(), nums1.end());

        if(minEl % 2 == 1) return true;

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 == 1){
                return false;
            }
        }
        return true;
    }
};