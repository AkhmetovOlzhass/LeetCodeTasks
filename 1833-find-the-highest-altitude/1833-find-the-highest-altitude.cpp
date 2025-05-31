class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefix(gain.size() +1);
        prefix[0] = 0;
        int max = 0;
        for(int i =0;i< gain.size(); i++){
            prefix[i+1] = prefix[i] + gain[i];
            if(max < prefix[i+1]){
                max = prefix[i+1];
            }
        }
        return max;
    }
};