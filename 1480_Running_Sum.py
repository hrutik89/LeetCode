class Solution(object):
    def runningSum(self, nums):
        sum=0
        ret=[]
        for i in range(len(nums)):
            sum+=nums[i]
            ret.append(sum)
        return ret
        