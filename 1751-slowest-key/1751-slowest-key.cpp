class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        int maxI = 0;
        for(int i = 1; i<keysPressed.size(); i++){
            if(max < releaseTimes[i] - releaseTimes[i-1]){
                max = releaseTimes[i] - releaseTimes[i-1];
                maxI = i;
            }
        }

        vector<int> maxChars;

        maxChars.push_back(maxI);
        for(int i = 1; i<keysPressed.size(); i++){
            if(max == releaseTimes[i] - releaseTimes[i-1]){
                maxChars.push_back(i);
                cout << i << " ";
            }
        }

        char res = keysPressed[maxChars[0]];
        for(int i = 1; i<maxChars.size(); i++){
            if(res < keysPressed[maxChars[i]]){
                res = keysPressed[maxChars[i]];
            }
        }

        return res;
    }
};