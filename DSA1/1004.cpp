class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zero = 0;
        int maxlen = 0;
        for (int right =0; right < nums.size(); right++){
            if (nums[right] == 0) zero++;
            while (zero > k){
                if (nums[left] == 0) zero--;
                left++;
            }
            int current_window = right-left+1;
            if (current_window > maxlen){
                maxlen = current_window;
            }
        }
        return maxlen;
    }
};