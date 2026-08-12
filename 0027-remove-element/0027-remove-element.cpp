class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        for (int i = 0; i <= j; i++) {
            if (nums[i] == val) {
                while (i <= j && nums[j] == val) {
                    j--;
                }
                if (i <= j) {
                    nums[i] = nums[j];
                    j--;
                }
            }
        }
        return j + 1;
    }
};