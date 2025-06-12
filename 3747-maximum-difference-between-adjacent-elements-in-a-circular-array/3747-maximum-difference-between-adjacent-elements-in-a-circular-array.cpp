class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int maxSum = 0;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            int j = (i + 1) % nums.size();
            sum = nums[i] - nums[j];
            maxSum = max(maxSum, abs(sum));

        }

        return maxSum;
    }
};