class Solution {
public:
    string removeStars(string s) {
        string st;
        for (char c : s){
            if (c != '*'){
                st.push_back(c);
            }
            else{
                if (!st.empty()) st.pop_back();
            }
        }
        return st;
    }
};