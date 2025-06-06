class Solution {
public:
    string robotWithString(string s) {
        map<char, int> res;
        stack<char> t;
        string finalRes = "";

        for(int i =0; i<s.size();i++){
            res[s[i]]++;
        }

        for(int i = 0; i<s.size();i++){
            t.push(s[i]);
            res[s[i]]--;
            if (res[s[i]] == 0) {
                res.erase(s[i]);
            }
            while(!t.empty() && t.top() <= res.begin()->first){
                finalRes += t.top();
                t.pop();
            }
        }

        while(!t.empty()){
            finalRes += t.top();
            t.pop();
        }

        return finalRes;
    }
};