class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n =asteroids.size();

        for(int i =0; i<n;i++){
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                if(abs(st.top()) < abs(asteroids[i])){
                    st.pop();
                    continue;
                } else if (abs(st.top()) == abs(asteroids[i])) {
                    st.pop();
                    asteroids[i] = 0;
                    break;
                } else {
                    asteroids[i] = 0;
                    break;
                }
            }

            if(asteroids[i] != 0){
                st.push(asteroids[i]);
            }
        }
        vector<int> res(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};