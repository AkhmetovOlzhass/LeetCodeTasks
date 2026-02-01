class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxRes = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                counter++;
            } else {
                if(maxRes < counter){
                    maxRes = counter;
                }
                counter = 0;
            }
        }
        if(maxRes < counter){
            maxRes = counter;
        }
        return maxRes;
    }
};