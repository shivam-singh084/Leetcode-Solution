class Solution {
public:
    bool judgeCircle(string moves) {
        int l = moves.length();

        int cntR = 0, cntU = 0, cntD = 0, cntL = 0;
        for(int i = 0; i < l; i++){
            if(moves[i] == 'R' ) cntR++;
            else if(moves[i] == 'L' ) cntL++;
            else if(moves[i] == 'U' ) cntU++;
            else cntD++;
        }
        return (cntR == cntL && cntU == cntD);

    }
};