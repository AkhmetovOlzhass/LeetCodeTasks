class Solution {
public:
    int minMaxDifference(int num) {
        int numSize = to_string(num).size();
        string s = to_string(num);
        string sMin = to_string(num);

        char maxDig = -1;
        char minDig = -1;
        for(int i = 0; i<numSize; i++){
            if(s[i] - '0' < 9){
                maxDig = s[i];
                break;
            }
        }

        for(int i = 0; i<numSize; i++){
            if(sMin[i] - '0' >0){
                minDig = sMin[i];
                break;
            }
        }

        for(int i = 0; i<numSize; i++){
            if(s[i] == maxDig){
                s[i] = '9';
            }

            if(sMin[i] == minDig){
                sMin[i] = '0';
            }
        }

        int maxNum = stoi(s);
        int minNum = stoi(sMin);

        cout << maxNum;
        cout << minNum;

        return maxNum - minNum;
    }
};