class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";

        // while(i < word1.size() || j<word2.size()){
        //     if(i<word1.size()){
        //         res.push_back(word1[i++]);
        //     }
        //     if(j<word2.size()){
        //         res.push_back(word2[j++]);
        //     }
        // }

        for(int i = 0; i< max(word1.size(), word2.size()); i++){
            if(i< word1.size()){
                res.push_back(word1[i]);
            }
            if(i < word2.size()){
                res.push_back(word2[i]);
            }
        }


        return res;
    }
};