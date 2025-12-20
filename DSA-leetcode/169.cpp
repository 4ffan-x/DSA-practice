class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el;
        for (int i = 0; i < n; i++){
            if (cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if (nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cn1 = 0;
        for (int j = 0; j < n; j++){
            if (nums[j] == el){
                cn1++;
            }
        }
        if (cn1 > n/2){
            return el;
        }
        else{
            return -1;
        }
    }
};