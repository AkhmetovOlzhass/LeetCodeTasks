class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        unordered_set<string> directed;
        for(auto& con : connections){   
            int from = con[0];
            int to = con[1];
            graph[from].push_back(to);
            graph[to].push_back(from);
            directed.insert(to_string(from) + "->" + to_string(to));
        }
        vector<bool> visited(n, false);
        int count = 0;

        dfs(0, graph, directed, visited, count);

        return count;
    }

    void dfs(int node, vector<vector<int>>& graph, unordered_set<string>& directed,  vector<bool>& visited, int& count){
        visited[node] = true;

        for(int neighbor : graph[node]){
            
            if(!visited[neighbor]){
                string edge = to_string(node) + "->" + to_string(neighbor);
                if (directed.count(edge)) {
                    count++;
                }
                dfs(neighbor, graph,directed, visited, count);
            }
        }
    }
};