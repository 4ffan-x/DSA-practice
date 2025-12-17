class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int x : arr){
            freq[x]++;
        }
        unordered_set<int> seen;

        for (auto &p : freq){
            int f = p.second;
            if (seen.count(f)){
                return false;
            }
            seen.insert(f);
        }
        return true;
    }
};