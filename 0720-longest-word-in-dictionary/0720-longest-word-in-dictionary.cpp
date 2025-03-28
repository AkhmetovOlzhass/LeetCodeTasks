class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> dict(words.begin(), words.end());
        string res = "";
        for(string word : words){
            bool canBuild = true;

            for(int i = 1; i<word.length(); i++){
                if(!dict.count(word.substr(0,i))){
                    canBuild = false;
                    break;
                }
            }

            if(canBuild){
               if (word.length() > res.length() || 
                   (word.length() == res.length() && word < res)) {
                    res = word;
                }
            }
        }

        return res;
    }
};