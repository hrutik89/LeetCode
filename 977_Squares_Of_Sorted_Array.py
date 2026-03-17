class Solution(object):
    def sortedSquares(self, nums):
        ret=[]
        for i in nums:
            ret.append(i*i)
        return sorted(ret)
        