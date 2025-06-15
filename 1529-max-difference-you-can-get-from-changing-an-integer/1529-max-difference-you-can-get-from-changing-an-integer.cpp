class Solution {
public:
    int maxDiff(int num) {
        string str = to_string(num);
        char firstMax = str[0];
        char firstMin = str[0];
        int posMin = 0;

        for(int i = 0; i<str.size(); i++){
            if(str[i] - '0' < 9){
                firstMax = str[i];
                break;
            }
        }

        for(int i = 0; i<str.size(); i++){
            if(str[i] - '0' > 1){
                firstMin = str[i];
                posMin = i;
                break;
            }
        }

        string strCopy1 = "";
        string strCopy2 = "";

        for(int i =0; i<str.size(); i++){
            if(str[i] == firstMax){
                strCopy1 += '9';
            }else{
                strCopy1 += str[i];
            }
        }

        for(int i =0; i<str.size(); i++){
            if(str[i] == firstMin && posMin ==0){
                strCopy2 += '1';
            }else if(str[i] == firstMin && posMin !=0){
                strCopy2 += '0';
                
            }else{
                strCopy2 += str[i];
            }
        }

        return stoi(strCopy1) - stoi(strCopy2);
    }
};