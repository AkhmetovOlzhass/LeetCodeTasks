class Solution(object):
    def maximumWealth(self, accounts):
        maxInt = 0
        for i in accounts:
            summ =0
            for j in i:
                summ += j
            if(maxInt < summ):
                maxInt = summ
        return maxInt