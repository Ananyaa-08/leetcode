class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> v;
        for (int i = 0; i < position.size(); i++) {
            double t = (double)(target - position[i]) / speed[i];
            v.push_back({position[i], t});
        }
        sort(v.rbegin(), v.rend());
        int ans = 0;
        double mx = 0;
        for (auto &p : v) {
            if (p.second > mx) {
                ans++;
                mx = p.second;
            }
        }
        return ans;
    }
};