class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i=0;
       int n=nums.size();
       for(int j=0; j<n; j++){
        if (nums[j]!=0){
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            temp=temp+1;
            i=i+1;
        }
       } 
    }
};