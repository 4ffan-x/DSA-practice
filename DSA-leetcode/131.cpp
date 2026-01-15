class Solution {
public:
    vector<vector<string>> ans;
    vector<string> path;

    bool isPal(string &s, int l, int r){
        while(l < r){
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }

    void solve(string &s, int idx){
        if(idx == s.size()){
            ans.push_back(path);
            return;
        }
        for(int i = idx; i < s.size(); i++){
            if(isPal(s, idx, i)){
                path.push_back(s.substr(idx, i - idx + 1));
                solve(s, i + 1);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        solve(s, 0);
        return ans;
    }
};