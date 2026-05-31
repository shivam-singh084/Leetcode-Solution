class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        int n = asteroids.size();
         long long  newMass = mass;
        for(int i = 0; i < n; i++){
           
            if(newMass >= asteroids[i]){
                newMass += asteroids[i];
                mass = newMass;
            }else{
                return false;
            }
        }
        return true;
    }
};