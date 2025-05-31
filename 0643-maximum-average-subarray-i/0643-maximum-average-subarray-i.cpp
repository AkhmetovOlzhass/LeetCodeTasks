class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        double maxSum = 0;

        if(nums.size() ==1){
            return nums[0];
        }

        for(int i = 0; i< k; i++){
            windowSum += nums[i];
        }

        maxSum = windowSum/k;

        for(int i = k; i< nums.size(); i++){
            windowSum += nums[i] - nums[i-k];

            maxSum = max(maxSum, windowSum/k);
        }

        return maxSum;
    }
};