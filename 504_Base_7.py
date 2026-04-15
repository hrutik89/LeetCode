class Solution(object):
    def convertToBase7(self, num):
        if num==0:
            return "0"
        neg=num<0
        num=abs(num)
        result=""
        while num>0:
            result+=str(num%7)
            num=num//7
        if num<neg:
            result+="-"
        return result[::-1]