class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> answer;

        unordered_map<int, int> ball_map;
        unordered_map<int, int> color_freq;

        for(int i = 0; i<queries.size(); i++){
            if(ball_map.count(queries[i][0])){
                int old_color = ball_map[queries[i][0]];
                color_freq[old_color] -= 1;

                if(color_freq[old_color] == 0){
                    color_freq.erase(old_color);
                }
            }

            ball_map[queries[i][0]] = queries[i][1];
            color_freq[queries[i][1]] += 1;

            answer.push_back(color_freq.size());
        }

        return answer;
    }
};