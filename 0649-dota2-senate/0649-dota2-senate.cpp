class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> q1;
        queue<int> q2;

        for(int i = 0; i < n; i++){
            if(senate[i] == 'R') q1.push(i);
            else q2.push(i);
        }

        while(!q1.empty() && !q2.empty()){
            int r = q1.front();
            int d = q2.front();

            q1.pop();
            q2.pop();

            if(r < d){
                q1.push(r + n);
            }
            else{
                q2.push(d + n);
            }
        }
        if(q1.empty()) return "Dire";
        return "Radiant";
    }
};