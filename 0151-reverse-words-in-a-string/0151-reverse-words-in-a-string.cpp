class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = s.size()-1;

        string res1, res2;
        while(i <= j){
            string word1 = "", word2 = "";

            while (i <= j && s[i] == ' ') i++;

            while(i <= j && s[i] != ' '){
                word1 += s[i];
                i++;
            }

            while (i <= j && s[j] == ' ') j--;

            while(i <= j && s[j] != ' '){
                word2 = s[j] + word2;
                j--;
            }

            if (!word2.empty()) res1 = res1 + word2 + " ";
            if (!word1.empty()) res2 = word1 + " " + res2;
        }

        return trim(res1 + res2);
    } 

    string trim(std::string s) {
        while (s.size() > 0 && s[0] == ' ') {
            s.erase(0, 1);
        }
        while (s.size() > 0 && s[s.size() - 1] == ' ') {
            s.erase(s.size() - 1, 1);
        }
    return s;
}
};