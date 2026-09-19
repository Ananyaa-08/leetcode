class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string s;

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (s == "..") {
                    if (!st.empty()) {
                        st.pop_back();
                    }
                } 
                else if (s != "" && s != ".") {
                    st.push_back(s);
                }

                s = "";
            } 
            else {
                s += path[i];
            }
        }

        string ans;

        for (string x : st) {
            ans += "/" + x;
        }

        return ans.empty() ? "/" : ans;
    }
};