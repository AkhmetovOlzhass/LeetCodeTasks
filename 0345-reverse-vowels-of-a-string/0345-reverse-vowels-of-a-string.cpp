class Solution {
public:
    string reverseVowels(string s) {
        string res = "";
        vector<int> arr;
        for(int i = 0; i<s.size(); i++){
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u'){
                res = s[i] + res;
                arr.push_back(i);
            }
        } 

        int j = 0;
        for(int i = 0; i< s.size() && j < arr.size(); i++){
            if(i == arr[j]){
                s[i] = res[j];
                j++;
            }
        }

        return s;
    }
};