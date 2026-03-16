class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        temp=sorted(nums)
        ret=[]
        dic={}
        for i,num in enumerate(temp):
            if num not in dic:
                dic[num]=i
        for i in nums:
            ret.append(dic[i])
        return ret
        