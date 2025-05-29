class Solution {
public:
    string reverseVowels(string s) {
        int k = 0;
        int n = s.size() -1;
        while( k < n){
            while(k<n && tolower(s[k]) != 'a' && tolower(s[k]) != 'e' && tolower(s[k]) != 'i' && tolower(s[k]) != 'o' && tolower(s[k]) != 'u'){
                k++;
            }

            while (k<n && tolower(s[n]) != 'a' && tolower(s[n]) != 'e' && tolower(s[n]) != 'i' && tolower(s[n]) != 'o' && tolower(s[n]) != 'u'){
                n--;
            }

            swap(s[k], s[n]);

            k++;
            n--;
        }

        return s;
    }
};