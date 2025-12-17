class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int high = 0;
        int cur = 0;
        for (int i =0; i < n; i++){
            cur += gain[i];
            if (cur > high){
                high = cur;
            } 
        }
        return high;
    }
};