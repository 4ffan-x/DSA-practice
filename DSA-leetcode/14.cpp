class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int s = strs.size();
        sort(strs.begin(),strs.end());
        int i = 0;
        while (i<s && strs[0][i] == strs[s-1][i]){
            ans += strs[0][i];
            i++;
        }
        return ans;
    }
};