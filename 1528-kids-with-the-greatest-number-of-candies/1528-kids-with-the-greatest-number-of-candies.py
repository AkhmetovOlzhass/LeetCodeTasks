class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        res = []
        for i in range(len(candies)):
            summ = candies[i] + extraCandies
            temp = True
            for j in range(len(candies)):
                if(j != i):
                    if(summ < candies[j]):
                        temp = False
                        break
            res.append(temp)
                        
        return res