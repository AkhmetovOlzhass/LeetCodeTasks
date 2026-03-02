class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int res = 0;
        

        while(i < chars.size()){
            int groupLength = 1;
            while(i+groupLength<chars.size() && chars[i] == chars[i+groupLength]){
                groupLength++;
            }
            chars[res] = chars[i];
            res++;

            if(groupLength>1){
                for(int j = 0; j<to_string(groupLength).size(); j++){
                    chars[res] = to_string(groupLength)[j];
                    res++;
                }
            }

            i+=groupLength;


        }

        return res;
    }
};