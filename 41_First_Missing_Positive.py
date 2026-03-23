class Solution(object):
    def firstMissingPositive(self, nums):
        temp=set(nums)
        i=1
        while True:
            if i not in temp:
                return i
            i+=1