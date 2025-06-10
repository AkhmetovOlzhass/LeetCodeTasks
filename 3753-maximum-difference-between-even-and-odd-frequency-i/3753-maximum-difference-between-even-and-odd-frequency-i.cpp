class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i<s.size(); i++){
            mp[s[i]]++;
        }

        auto first = mp.begin();
        int max = INT_MIN;
        int min = INT_MAX;


        for(const auto& [key, value] : mp){

            if(max < value && value %2 == 1){
                max = value;
            }

            if(min > value && value %2 == 0){
                min = value;
            }
        }

        return max - min;
    }
};