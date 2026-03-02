class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0;
        int r = 0;
        int best = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            }

            while(zeros > k){
                if(nums[r] == 0){
                    zeros--;
                }
                r++;
            }

            best = max(best, i - r +1);


        }

        return best;
    }
};