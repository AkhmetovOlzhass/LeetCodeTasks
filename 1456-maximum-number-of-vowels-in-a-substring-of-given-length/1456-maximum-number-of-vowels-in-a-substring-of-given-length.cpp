class Solution {
public:
    bool isVowel(char c){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            return true;
        }

        return false;
    }
    int maxVowels(string s, int k) {
        int res = 0;
        for(int i = 0; i<k;i++){
            if(isVowel(s[i])){
                res++;
            }
        }

        int max = res;

        for(int i = k; i<s.size(); i++){
            if(isVowel(s[i])){
                res++;
            } 
            if(isVowel(s[i-k])){
                res--;
            }

            if(max < res){
                max = res;
            }
        }

        return max;
    }
};