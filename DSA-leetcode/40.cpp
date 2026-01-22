class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(0, target, candidates, temp, ans);
        return ans;
    }
    
    void dfs(int idx, int target, vector<int>& a, vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < a.size(); i++) {
            if (i > idx && a[i] == a[i-1]) continue;
            if (a[i] > target) break;
            temp.push_back(a[i]);
            dfs(i + 1, target - a[i], a, temp, ans);
            temp.pop_back();
        }
    }
};