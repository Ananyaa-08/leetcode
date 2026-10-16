class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0; int r=0; long long sum=0; 
        int min_length=nums.size()+1;
        while(r<nums.size()){
            sum=sum+nums[r];
            while(sum>=target){
                sum=sum-nums[l];
                min_length=min(min_length, r-l+1);
                l=l+1;
            }
            r++;
        }
        if (min_length == nums.size() + 1) {
            return 0;
        }
        else {
            return min_length;
        }  
    }
};