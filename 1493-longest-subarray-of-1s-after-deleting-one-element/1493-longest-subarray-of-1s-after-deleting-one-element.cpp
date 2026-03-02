class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int sum = 0;
        int r = 0;
        int zeros = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 1){
                zeros++;
            } 

            while(zeros > 1){
                if(nums[r] == 0){
                    zeros--;
                }

                r++;
            }

            sum = max(sum, i-r);
        }

        return sum;
    }
};