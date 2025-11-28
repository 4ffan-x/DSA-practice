class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map <int,int> mp;
        for (int x : nums){
            int need = k-x;
            if (mp[need] > 0){
                count++;
                mp[need]--;
            }
            else{
                mp[x]++;
            }
        }
        return count;
    }
};