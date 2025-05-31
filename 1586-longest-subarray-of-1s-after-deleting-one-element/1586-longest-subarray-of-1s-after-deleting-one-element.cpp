class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0;
        int zeroCounter= 0;
        int maxRes = 0;

        for(int r = 0; r< nums.size(); r++){
            if(nums[r] == 0){
                zeroCounter++;
            }

            while(zeroCounter>1){
                if(nums[l] == 0){
                    zeroCounter--;
                }
                l++;
            }

            maxRes = max(maxRes, r-l);
        }

        return maxRes;
    }
};