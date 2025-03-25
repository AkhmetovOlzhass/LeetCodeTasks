class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        int j=0,i=0;
        vector<string> result;
        string res = "";
        while(j<n){
            res += s[j];
            if(res.size() == k){
                result.push_back(res);
                res = "";
            }
            j++;
        }
        
        if(res != ""){
            while(res.size() < k){
                res += fill;
            }
            result.push_back(res);
        }
        return result;
    }
};