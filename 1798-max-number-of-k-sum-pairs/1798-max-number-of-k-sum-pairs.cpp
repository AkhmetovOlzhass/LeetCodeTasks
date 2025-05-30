class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l = 0;
        int r = nums.size()-1;
        sort(nums.begin(), nums.end());
        int counter = 0;
        while(l< r){
            if(nums[l] + nums[r] == k){
                counter++;
                l++;
                r--;
            }else if(nums[l] + nums[r] > k){
                r--;
            } else{
                l++;
            }
        }

        return counter;
    }
};