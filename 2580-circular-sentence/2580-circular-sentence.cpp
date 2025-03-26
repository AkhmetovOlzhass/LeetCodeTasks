class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> strWords;
        string currentWord;
        for (short i = 0; i < sentence.length(); i++) {
            if (sentence[i] == ' ' && !currentWord.empty()) {
                strWords.push_back(currentWord);
                currentWord.clear();
            } else {
                currentWord += sentence[i];
            }
        }

        // Добавляем последнее слово
        if (!currentWord.empty()) {
            strWords.push_back(currentWord);
        }
        if(strWords.size() == 1 && strWords[0][0] != strWords[0][strWords[0].size()-1]) {
            return false;
        }
        for (int i = 1; i < strWords.size(); i++) {


            if( strWords[i-1][strWords[i-1].size()-1] != strWords[i][0] || strWords[strWords.size()-1][strWords[strWords.size()-1].size()-1] != strWords[0][0]){
                return false;
            }
        }

        return true;
    }
};