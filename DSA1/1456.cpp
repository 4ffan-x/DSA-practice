class Solution {
public:
    bool isvowel(char c){
        return c == 'a' || c=='e' || c =='i'||c=='o'||c=='u';
    }

    int maxVowels(string s, int k) {
        int count = 0;
        for (int i = 0; i < k; i++){
            if (isvowel(s[i])) count++;
        }
        int maxvowel = count;

        for (int i = k; i < s.size(); i++){
            if (isvowel(s[i-k])) count--;
            if (isvowel(s[i])) count++;

            if (count > maxvowel){
                maxvowel = count;
            }
        }
        return maxvowel;
    }
};