class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;

        auto addWords = [&](string s){
            string word = "";
            for(char c : s){
                if(c != ' '){
                    word += c;
                } else{
                    count[word]++;
                    word = "";
                }
            }
            count[word]++;
        };

        addWords(s1);
        addWords(s2);

        vector<string> result;

        for (auto [word, freq] : count) {
            if (freq == 1) result.push_back(word);
        }

        return result;
    }


};
