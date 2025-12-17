class Solution {
public:
    int countParts(vector<int>& nums, long long maxSum) {
        int parts = 1;
        long long sum = 0;

        for (int x : nums) {
            if (sum + x <= maxSum) {
                sum += x;
            } else {
                parts++;
                sum = x;
            }
        }
        return parts;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = 0;

        for (int x : nums) high += x;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (countParts(nums, mid) > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
