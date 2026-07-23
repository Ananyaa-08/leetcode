class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int even = 0;

        for (int x : nums) {
            if ((x & 1) == 0 && ++even == 2)
                return true;
        }

        return false;
    }
};