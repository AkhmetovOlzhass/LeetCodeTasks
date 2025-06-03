class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> stCount;
        string res = "";
        string finalStr = "";
        int k = 0;

        for(int i = 0; i < s.size();i++){
            if(isdigit(s[i])){
                k = k *10 + (s[i] - '0');
            } else if(s[i] == '['){
                stCount.push(k);
                st.push(res);
                k=0;
                res = "";  
            } else if(s[i] == ']'){
                int repeat = stCount.top(); 
                stCount.pop();

                string prevStr = st.top(); 
                st.pop();

                string repeated = "";
                for(int j = 0; j<repeat; j++){
                    repeated += res;
                }
                res = prevStr + repeated;

            }else{
                res += s[i];
            }
        }

        return res;
    }

    // string rec(string s){
    //     string res = "";
    //     for(int i =0; i< s.size();i++){
    //         if(s[i] == '['){

    //         }
    //     }
    //     return 
    // }
};