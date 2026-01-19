class Solution {
public:
    vector<vector<int>> res;
    
    void backtrack(int idx, int target, vector<int>& candidates, vector<int>& curr) {
        if (target == 0) {
            res.push_back(curr);
            return;
        }
        if (idx == candidates.size() || target < 0) return;
        
        curr.push_back(candidates[idx]);
        backtrack(idx, target - candidates[idx], candidates, curr);
        curr.pop_back();
        
        backtrack(idx + 1, target, candidates, curr);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(0, target, candidates, curr);
        return res;
    }
};