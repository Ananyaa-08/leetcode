
class Solution {
public:
    bool isfreqsame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int freq[26] = {0};
        int windfreq[26] = {0};
        int windsize = s1.size();
        for (int i = 0; i < windsize; i++) {
            freq[s1[i] - 'a']++;
            windfreq[s2[i] - 'a']++;
        }
        if (isfreqsame(freq, windfreq)) return true;
        for (int i = windsize; i < s2.size(); i++) {
            windfreq[s2[i - windsize] - 'a']--;
            windfreq[s2[i] - 'a']++;
            if (isfreqsame(freq, windfreq)) {
                return true;
            }
        }
        return false;
    }
};
