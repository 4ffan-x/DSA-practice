class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
        int zero = 0;
        int left = 0;
        for (int right = 0; right < n; right++){
            if (nums[right] == 0){
                zero++;
            }
            while (zero > 1){
                if (nums[left]==0) zero--;
                left++;
            }
            int current_window = (right-left+1)-1;
            if (current_window > maxlen){
                maxlen = current_window;
            }
        }
        return maxlen;
    }
};