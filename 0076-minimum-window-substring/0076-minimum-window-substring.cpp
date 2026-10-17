class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.size() < t.size()) {
            return "";
        }
        vector<int> need(128, 0);
        vector<int> window(128, 0);
        for (char c : t) {
            need[c]++;
        }
        int left = 0;
        int matched = 0;
        int minLength = INT_MAX;
        int start = 0;
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            window[c]++;
            if (window[c] <= need[c]) {
                matched++;
            }
            while (matched == t.size()) {
                int length = right - left + 1;
                if (length < minLength) {
                    minLength = length;
                    start = left;
                }
                char removed = s[left];
                window[removed]--;
                if (window[removed] < need[removed]) {
                    matched--;
                }
                left++;
            }
        }
        if (minLength == INT_MAX) {
            return "";
        } else {
            return s.substr(start, minLength);
        }
    }
};