class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int best =0;
        int r = 0;
        for(int i = 0; i<s.size(); i++){
            mp[s[i]]++;
            while (mp[s[i]] > 1) {
                mp[s[r]]--;
                r++; 
            }
            best = max(best, i - r + 1);
        }

        return best;
    }
};