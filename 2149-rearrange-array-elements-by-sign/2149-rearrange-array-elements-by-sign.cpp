class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[j]);
            i++;
            j++; 
        }
        return ans;
    }
};