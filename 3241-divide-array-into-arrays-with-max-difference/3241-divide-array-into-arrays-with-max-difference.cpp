class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

    for (int i = 0; i < nums.size(); i += 3) {
        vector<int> temp;

        int front = nums[i];
        int mid = nums[i+1];
        int end = nums[i+2];

        if(end-front <=k){
            temp.push_back(front);
            temp.push_back(mid);
            temp.push_back(end);

            res.push_back(temp);
        } else{
            return {};
        }
    }

    return res;

    }
};