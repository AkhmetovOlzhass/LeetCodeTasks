class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad;
        queue<int> dire;

        for(int i = 0; i<senate.size(); i++){
            if(senate[i] == 'R'){
                rad.push(i);
            } else{
                dire.push(i);
            }
        }

        while(!rad.empty() && !dire.empty()){
            if(rad.front() < dire.front()){
                int temp = rad.front() + senate.size();
                rad.push(temp);
            }else{
                int temp = dire.front() + senate.size();
                dire.push(temp);
            }
            dire.pop();
            rad.pop();
        }

        return rad.empty() ? "Dire" : "Radiant";
    }
};