class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        res = 0
        for s in jewels:
            summ = 0
            for c in stones:
                if(c == s):
                    summ += 1
            res += summ
        return res
        