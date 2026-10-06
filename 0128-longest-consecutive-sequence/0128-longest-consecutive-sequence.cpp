class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int longest=0;
        for(int x:numbers){
            if(numbers.find(x-1)==numbers.end()){
                int currnum=x;
                int currlength=1;
                while(numbers.find(currnum+1)!=numbers.end()){
                    currnum++;
                    currlength++;
                }
                longest=max(currlength,longest);
            } 
        }
        return longest;
    }
};