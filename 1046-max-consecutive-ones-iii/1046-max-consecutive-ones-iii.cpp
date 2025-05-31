class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int zeroCounter=0;

        int maxSize = 0;

        for(int r =0;r<nums.size(); r++){
            if(nums[r] == 0){
                zeroCounter++;
            }

            while(zeroCounter >k){
                if(nums[l] == 0){
                    zeroCounter--;
                }
                l++;
            }
            maxSize = max(maxSize, r-l+1);

        }


    return maxSize;

    }
};