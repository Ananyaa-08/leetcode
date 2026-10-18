class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> seen(26, 0);
        int l = 0, maxlen= 0, maxfreq = 0;
        for (int r = 0; r < s.size(); r++) {
            seen[s[r] - 'A']++;
            maxfreq = max(maxfreq, seen[s[r] - 'A']);
            if((r - l + 1) - maxfreq > k) {
                seen[s[l] - 'A']--;
                l++;
            }
            maxlen= max(maxlen,r - l + 1);
        }
        return maxlen;
    }
};