class Solution(object):
    def shuffle(self, nums, n):
        res = []
        for i in range(len(nums)/2):
            res.append(nums[i])
            res.append(nums[n+i])
        return res