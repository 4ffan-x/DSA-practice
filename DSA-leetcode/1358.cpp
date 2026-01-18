class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[3] = {0, 0, 0};
        int left = 0, res = 0;
        
        for (int right = 0; right < s.size(); right++) {
            cnt[s[right] - 'a']++;
            
            while (cnt[0] && cnt[1] && cnt[2]) {
                res += s.size() - right;
                cnt[s[left] - 'a']--;
                left++;
            }
        }
        return res;
    }
};