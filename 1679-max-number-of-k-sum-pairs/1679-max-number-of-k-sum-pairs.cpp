class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size()-1;
        int counter = 0;

        while(l<r){
            int sum = nums[l] + nums[r];

            if(sum > k){
                r--;
            } else if(sum < k){
                l++;
            } else{
                l++;
                r--;
                counter++;
            }

        }

        return counter;
    }
};