class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minSoFar = nums[0];
        int res = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > minSoFar) {
                res = max(res, nums[i] - minSoFar);
            } else {
                minSoFar = nums[i];
            }
        }

        return res;
    }
};