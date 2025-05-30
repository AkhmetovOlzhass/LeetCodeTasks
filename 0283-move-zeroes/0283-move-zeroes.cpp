class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != 0){
                res.push_back(nums[i]);
            }
        }

        for(int i = 0; i< nums.size(); i++){
            if(i < res.size()){
                nums[i] = res[i];
            } else{
                nums[i] = 0;
            }
        }
        

    
    }
};