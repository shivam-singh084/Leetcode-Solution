class Solution {
public:
    int eatall(vector<int>& piles, int mid){
        int actualhour = 0;

        for(int x : piles){
            actualhour = actualhour + x/mid;
            if(x%mid != 0){
                actualhour++;
            } 
        }
        return actualhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());

        while(st < end){
            int mid = st + (end-st)/2;
            if(eatall(piles, mid) <= h){
                end = mid;
            }else{
                st = mid + 1;
            }
        }
        return st;
    }
};