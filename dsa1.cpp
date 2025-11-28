class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<bool> used(n, false);
        for(int i = 0; i < n; i++){
            if (used[i]) continue;
            for(int j = i+1; j<n; j++){
                if (!used[j] && nums[i]+nums[j]==k){
                    used[i] = true;
                    used[j] = true;
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
// 1679