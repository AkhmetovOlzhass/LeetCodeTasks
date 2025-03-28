class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> count;

        for(int i = 0; i<s.size(); i++){
            count[s[i]]++;
        }


        int firstValue = count.begin()->second;
        for(auto [str, freq] : count){
            if(freq != firstValue){
                return false;
            }
        }

        return true;
    }
};