class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int counter= 0;

        while(i<s.size()){
            while(j<t.size()){
                if(s[i] == t[j]){
                    j++;
                    counter++;
                    break;
                }
                j++;
            }
            i++;
        }


        if(counter == s.size()){
            return true;
        }
        return false;
    }
};