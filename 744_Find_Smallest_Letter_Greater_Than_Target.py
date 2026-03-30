class Solution(object):
    def nextGreatestLetter(self, letters, target):
        temp=sorted(letters)
        for i in temp:
            if i>target:
                return i
                break
        return temp[0]
        