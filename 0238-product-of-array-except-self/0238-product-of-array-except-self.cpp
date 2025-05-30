class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr1 = {1};
        vector<int> arr2 = {1};
        vector<int> res;

        int s = nums.size();

        int res1 = 1;
        int res2 = 1;

        for (int i = 0; i < s-1; i++){
            res1 = res1 * nums[i];
            arr1.push_back(res1);

            res2 = res2 * nums[s - 1 - i];
            arr2.push_back(res2);
        }

        for(int i = 0; i < s; i++){
            res.push_back(arr1[i] * arr2[s-1-i]);
        }


        return res;
    }
};