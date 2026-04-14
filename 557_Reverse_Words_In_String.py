class Solution(object):
    def reverseWords(self, s):
        words=s.split(" ")
        result=[]
        for w in words:
            result.append(w[::-1])
        return " ".join(result)
        