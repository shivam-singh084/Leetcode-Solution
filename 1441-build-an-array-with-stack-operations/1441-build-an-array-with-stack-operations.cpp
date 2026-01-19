class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int stream = 1;
        vector<string> ans;
        int i = 0;
        while(i < target.size() && stream <= n){
            ans.push_back("Push");
            if(target[i] == stream){
                i++;
            }
            else{
                ans.push_back("Pop");
            }
            stream++;
        }
        return ans;
    }
};