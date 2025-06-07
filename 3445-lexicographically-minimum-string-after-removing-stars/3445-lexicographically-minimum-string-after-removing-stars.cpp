class Solution {
public:
    string clearStars(string s) {
        multiset<char> ms;
        vector<char> v;

        for (int i = 0; i < s.size(); i++) {
            if(s[i] != '*'){
                ms.insert(s[i]);
                v.push_back(s[i]);
            }else{
                char to_remove = *ms.begin();

                ms.erase(ms.find(to_remove));

                for(int j = v.size()-1; j >= 0; j--){
                    if(v[j] == to_remove){
                        v.erase(v.begin() + j);
                        break;
                    }
                }   
            }
        }

        return string(v.begin(), v.end());
    }
};
