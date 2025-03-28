class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        pair <int, char> ans = {releaseTimes[0], keysPressed[0]};

        for(int i = 1; i < releaseTimes.size(); i++){
            ans = max(ans, {releaseTimes[i] - releaseTimes[i-1], keysPressed[i]});
        }

        return ans.second;
    }
};