class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());

        int low = 0;
        int high = nums[nums.size()-1] - nums[0];

        while(low < high){
            int mid = low + (high-low)/2;
            if(check(nums, p, mid)){
                high = mid;
            } else{
                low = mid+1;
            }
        }

        return low;
    }

    bool check(vector<int>& nums, int p, int maxDiff){
        int count = 0;
        int i = 1;

        while(i<nums.size()){
            if(nums[i] - nums[i-1] <= maxDiff){
                count++;
                i+=2;
            }else{
                i+=1;
            }
        }

        return count >=p;
    }
};