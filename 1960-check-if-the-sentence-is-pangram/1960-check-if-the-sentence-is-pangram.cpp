class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> dict;

        for(char c : sentence){
            dict.insert(c);
        }

        if(dict.size() < 26){
            return false;
        }

        return true;
    }
};