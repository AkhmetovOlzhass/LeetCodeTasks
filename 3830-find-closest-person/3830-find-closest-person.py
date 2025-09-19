class Solution(object):
    def findClosest(self, x, y, z):
        temp = abs(z-x)
        temp2 = abs(z-y)

        if(temp > temp2):
            return 2
        elif(temp < temp2):
            return 1
        else:
            return 0


        