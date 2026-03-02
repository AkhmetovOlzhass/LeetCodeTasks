class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int best = 0;
        int r = 0;
        int zeros = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            } 

            while(zeros > 1){
                if(nums[r] == 0){
                    zeros--;
                }

                r++;
            }

            best = max(best, i-r);
        }

        return best;
    }
};