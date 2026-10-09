class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        while (l < r) {
            int mid = l + (r - l) / 2;
            int parts = 1, sum = 0;
            for (int x : nums) {
                if (sum + x > mid) {
                    parts++;
                    sum = x;
                } else {
                    sum += x;
                }
            }
            if (parts > k) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;
    }
};