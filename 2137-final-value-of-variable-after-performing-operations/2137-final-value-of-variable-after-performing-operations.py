class Solution(object):
    def finalValueAfterOperations(self, operations):
        x = 0

        for s in operations:
            if(s == '--X' or s == 'X--'):
                x -= 1
            if(s == '++X' or s == 'X++'):
                x += 1
        return x