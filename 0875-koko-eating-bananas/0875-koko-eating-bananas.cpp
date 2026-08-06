class Solution {
public:
    bool canEat(vector<int>& piles, int mid, int h){
        int hour = 0;
        for(int i = 0; i < piles.size(); i++){
            hour += (piles[i] / mid );
            if(piles[i]%mid != 0){
                hour++;
            }
        }
        return hour <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());

        while(st < end){
            int mid = st + (end - st)/2;
            if(canEat(piles, mid, h)){
                end = mid;
            }
            else {
                st = mid + 1;
            }
        }
        return st;
    }
};