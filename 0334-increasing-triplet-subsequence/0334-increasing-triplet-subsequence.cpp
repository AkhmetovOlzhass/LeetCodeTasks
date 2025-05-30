class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int min1 = std::numeric_limits<int>::max();
        int min2 = std::numeric_limits<int>::max();

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= min1){
                min1 = nums[i];
            } else if(nums[i] <= min2){
                min2 = nums[i];
            } else{
                return true;
            }
        }

        return false;

    }
};