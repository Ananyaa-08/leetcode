class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        temp=n
        p,s=1,0
        d=0
        while(temp!=0):
           d=temp%10
           p=p*d
           s=s+d
           temp=temp//10
        diff=p-s
        return diff
        