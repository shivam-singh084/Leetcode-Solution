class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> st;
        int n = digits.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(i == j || j == k || k == i){
                        continue;
                    }
                    int digit = digits[i]*100 + digits[j]*10 + digits[k]*1;
                    if(digit >= 100 && digit % 2 == 0){
                        st.insert(digit);
                    }
                    
                }
            }
        }
        return st.size();
    }
};