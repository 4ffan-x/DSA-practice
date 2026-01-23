class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> res;
        string cur;
        
        function<void(int)> dfs = [&](int idx) {
            if (idx == digits.size()) {
                res.push_back(cur);
                return;
            }
            for (char c : mp[digits[idx] - '0']) {
                cur.push_back(c);
                dfs(idx + 1);
                cur.pop_back();
            }
        };
        
        dfs(0);
        return res;
    }
};