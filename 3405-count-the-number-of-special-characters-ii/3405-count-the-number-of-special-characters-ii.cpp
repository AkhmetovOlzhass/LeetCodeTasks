class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> lower_pos;
        unordered_map<char, int> upper_pos;

        for (int i = 0; i < word.size(); ++i) {
            char c = word[i];
            if (islower(c)) {
                if (lower_pos.count(c) == 0)
                    lower_pos[c] = i;
            } else if (isupper(c)) {
                if (upper_pos.count(c) == 0)
                    upper_pos[c] = i;
            }
        }

        int count = 0;

        for (char c = 'a'; c <= 'z'; ++c) {
            if (lower_pos.count(c) && upper_pos.count(toupper(c))) {
                int lowerIndex = lower_pos[c];
                int upperIndex = upper_pos[toupper(c)];
                
                bool valid = true;
                for (int i = upperIndex; i < word.size(); ++i) {
                    if (word[i] == c) {
                        valid = false;
                        break;
                    }
                }

                if (valid) count++;
            }
        }

        return count;
    }
};