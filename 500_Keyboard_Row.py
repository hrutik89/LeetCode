class Solution(object):
    def findWords(self, words):
        ret=[]
        q=set("qwertyuiop")
        a=set("asdfghjkl")
        z=set("zxcvbnm")
        for i in words:
            w=set(i.lower())
            if w<=q or w<=a or w<=z:
                ret.append(i) 
        return ret

        