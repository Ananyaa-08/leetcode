class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        uniqNum = 0;
        # TRaverse all elements through the loop...
        for idx in nums:
            # Concept of XOR...
            uniqNum ^= idx;
        return uniqNum; 

       