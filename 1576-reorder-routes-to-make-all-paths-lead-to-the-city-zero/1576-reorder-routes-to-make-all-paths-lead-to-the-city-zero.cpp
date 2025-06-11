class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        unordered_set<string> st;
        vector<bool> visited(n,false);

        for(auto& con : connections){
            int from = con[0];
            int to = con[1];
            graph[from].push_back(to);
            graph[to].push_back(from);
            st.insert(to_string(from) + "->" + to_string(to));
        }

        int count = 0;

        dfs(0, graph, st, visited, count);

        return count;


    }

    void dfs(int node,vector<vector<int>>& graph, unordered_set<string>& st, vector<bool>& visited, int& count){
        visited[node] = true;

        for(int neighbor : graph[node]){
            if(!visited[neighbor]){
                string direct = to_string(node) + "->" + to_string(neighbor);
                if(st.count(direct)){
                    count++;
                }
                dfs(neighbor, graph, st, visited, count);
            }
        }
    }



};