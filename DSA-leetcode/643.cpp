class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowsum = 0;
        for (int i = 0; i < k; i++){
            windowsum += nums[i];
        }
        double maxsum = windowsum;
        for (int i = k; i < nums.size(); i++){
            windowsum -= nums[i-k];
            windowsum += nums[i];
            if (windowsum > maxsum){
                maxsum = windowsum;
            }
        }
        return maxsum/k;
    }
};