class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        while (l <= r) {
            int mid = l + (r - l) / 2;

            int d = 1, sum = 0;

            for (int w : weights) {
                if (sum + w > mid) {
                    d++;
                    sum = 0;
                }
                sum += w;
            }

            if (d <= days)
                r = mid - 1;
            else
                l = mid + 1;
        }

        return l;
    }
};