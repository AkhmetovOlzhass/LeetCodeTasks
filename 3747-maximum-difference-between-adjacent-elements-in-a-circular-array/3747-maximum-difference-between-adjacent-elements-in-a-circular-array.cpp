class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int j = 1;
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            if(i == nums.size()-1){
                j = 0;
            }
            
            sum = nums[i] - nums[j];
            cout << sum;
            j++;
            maxSum = max(maxSum, abs(sum));

        }

        return maxSum;
    }
};