class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true){
            int temp = n;
            long long pro = 1;
            while(temp > 0){
                int digit = temp % 10;
                pro = pro * digit;
                temp = temp/10;
            }
        
            if(pro % t == 0) return n;

            n++;
        }   
    }
};