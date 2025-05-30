class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> finalStr;
        char c = chars[0];
        int counter = 1;

        if( chars.size() == 1){
            return 1;
        }
        for(int i = 1; i< chars.size(); i++){
            if(chars[i] != c){
                finalStr.push_back(c);
                if (counter > 1) {
                    string cnt = to_string(counter);
                    for (char digit : cnt) {
                        finalStr.push_back(digit);
                    }
                }
                c = chars[i];
                counter = 1;
            } else{
                counter++;
            }
        }



        finalStr.push_back(c);
        if (counter > 1) {
            string cnt = to_string(counter);
            for (char digit : cnt) {
                finalStr.push_back(digit);
            }
        }


        chars = finalStr;

        return chars.size();
    }
};