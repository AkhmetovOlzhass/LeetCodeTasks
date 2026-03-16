class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int pos = 0;
        for(int i = 0; i<gain.size(); i++){
            pos += gain[i];
            if(pos > max){
                max = pos;
            }
        }

        return max;
    }
};