class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if(word1.size() != word2.size()){
            return false;
        }
        unordered_map<char, int> res1;
        unordered_map<char, int> res2;
        unordered_set<char> keys1, keys2;
        vector<int> freq1, freq2;

        for(char c : word1){
            res1[c]++;
        }
        for(char c : word2){
            res2[c]++;
        }

        for (auto& [k, _] : res1) keys1.insert(k);
        for (auto& [k, _] : res2) keys2.insert(k);

        if (keys1 != keys2) return false;

        for (auto& [_, v] : res1) freq1.push_back(v);
        for (auto& [_, v] : res2) freq2.push_back(v);
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        if (freq1 != freq2) return false;

        return true;
    }
};