class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> cnt(26, 0);
        for (char c : tasks) cnt[c - 'A']++;

        int maxFreq = 0, maxCount = 0;
        for (int x : cnt) {
            if (x > maxFreq) {
                maxFreq = x;
                maxCount = 1;
            } else if (x == maxFreq) {
                maxCount++;
            }
        }

        int partCount = maxFreq - 1;
        int partLength = n - (maxCount - 1);
        int emptySlots = partCount * partLength;
        int availableTasks = tasks.size() - maxFreq * maxCount;
        int idles = max(0, emptySlots - availableTasks);

        return tasks.size() + idles;
    }
};