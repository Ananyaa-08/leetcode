class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       if (nums1.size() > nums2.size())
            return intersect(nums2, nums1);

        unordered_map<int, int> cnt;

        for (int num : nums1)
            cnt[num]++;

        vector<int> ans;

        for (int num : nums2) {
            if (cnt[num] > 0) {
                ans.push_back(num);
                cnt[num]--;
            }
        }

        return ans; 
    }
};