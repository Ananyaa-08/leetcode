class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        unordered_map<string, int> mp;
        for (string w : words)
            mp[w]++;
        int n = s.size(), k = words.size(), len = words[0].size();
        int total = k * len;
        for (int i = 0; i < len; i++) {
            int l = i, r = i, cnt = 0;
            unordered_map<string, int> cur;
            while (r + len <= n) {
                string w = s.substr(r, len);
                r += len;
                if (mp.count(w)) {
                    cur[w]++;
                    cnt++;
                    while (cur[w] > mp[w]) {
                        string left = s.substr(l, len);
                        cur[left]--;
                        l += len;
                        cnt--;
                    }
                    if (cnt == k) {
                        ans.push_back(l);
                        string left = s.substr(l, len);
                        cur[left]--;
                        l += len;
                        cnt--;
                    }
                } else {
                    cur.clear();
                    cnt = 0;
                    l = r;
                }
            }
        }
        return ans;
    }
};