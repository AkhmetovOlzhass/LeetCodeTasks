class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int counter = 0;
        vector<bool> visited(isConnected.size(), false);

        for(int i = 0; i<isConnected.size(); i++){
            if(!visited[i]){
                dfs(i, isConnected, visited);
                counter++;
            }
        }
        return counter;
    }

    void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited){
        visited[node] = true;

        for(int i = 0; i<graph.size(); i++){
            if(graph[node][i] == 1 && !visited[i]){
                dfs(i, graph, visited);
            }
        }
    }

};