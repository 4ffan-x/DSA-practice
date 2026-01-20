class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(1, k, n, curr, res);
        return res;
    }
    
    void dfs(int start, int k, int n, vector<int>& curr, vector<vector<int>>& res) {
        if (k == 0 && n == 0) {
            res.push_back(curr);
            return;
        }
        if (k == 0 || n <= 0) return;
        
        for (int i = start; i <= 9; i++) {
            curr.push_back(i);
            dfs(i + 1, k - 1, n - i, curr, res);
            curr.pop_back();
        }
    }
};