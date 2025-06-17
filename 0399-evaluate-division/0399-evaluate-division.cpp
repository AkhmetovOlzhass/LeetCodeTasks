class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, vector<pair<string, double>>> graph;

        for(int i = 0; i<equations.size(); i++){
            string u = equations[i][0];
            string v = equations[i][1];

            double val = values[i];

            graph[u].push_back({v, val});
            graph[v].push_back({u, 1.0/val});
        }

        vector<double> res;
        for (auto& q : queries) {
            unordered_map<string, bool> visited;
            double ans = dfs(q[0], q[1], graph, visited);
            res.push_back(ans);
        }

        return res;
    }

    double dfs (string cur, string target, unordered_map<string, vector<pair<string, double>>>& graph, unordered_map<string, bool>& visited){

        if(!graph.count(cur)) return -1;
        if(cur == target) return 1;

        visited[cur] = true;

        for(auto& [neigh, weight]: graph[cur]){
            if(visited[neigh]) continue;
            double ans = dfs(neigh, target,graph, visited);

            if(ans != -1.0){
                return ans * weight;
            }
        }

        return -1;
    }
};