class Solution {
public:
    int canMakeBouquet(vector<int>& bloomDay, int mid, int k){
        int cnt = 0;
        int consecutive_cnt = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                consecutive_cnt++;
            }else{
                consecutive_cnt = 0;
            }
            if(consecutive_cnt == k){
                cnt++;
                consecutive_cnt = 0;
            }
        }
        return cnt;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st = 0;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int minDays = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            

            if(canMakeBouquet(bloomDay, mid, k) >= m){
                minDays = mid;
                end = mid-1;
            }else{
                st = mid + 1;
            }

        }
        return minDays;
    }
};