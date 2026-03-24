class Solution(object):
    def multiply(self, num1, num2):
        sign = 1
        i=0
        j=0
        if(num1[0]=='-'):
            sign*=-1
            i=1
        if(num2[0]=='-'):
            sign*=-1
            j=1
        a=0
        b=0
        for c in range(i,len(num1)):
            digit = ord(num1[c])-ord('0')
            a=a*10+digit
        for d in range(j,len(num2)):
            digit = ord(num2[d])-ord('0')
            b=b*10+digit
        return str(sign*a*b)