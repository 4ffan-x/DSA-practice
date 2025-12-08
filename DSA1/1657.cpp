if(word1.size() != word2.size()) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        vector<bool> exist1(26, false);
        vector<bool> exist2(26, false);

        for(char c : word1) {
            freq1[c - 'a']++;
            exist1[c - 'a'] = true;
        }

        for(char c : word2) {
            freq2[c - 'a']++;
            exist2[c - 'a'] = true;
        }

        for(int i = 0; i < 26; i++) {
            if(exist1[i] != exist2[i]) return false;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;