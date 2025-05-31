class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int windowSum = 0;
        int maxWindow = 0;

        for(int i = 0; i<k; i++){
            if(isVowel(s[i])){
                windowSum++;
            }
        }

        maxWindow = windowSum;

        for(int i = k; i< s.size(); i++){
            if(isVowel(s[i-k])){
                windowSum--;
            }

            if(isVowel(s[i])){
                windowSum++;
            }

            maxWindow = max(maxWindow, windowSum);
        }

        return maxWindow;
    }
};