class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        dfs(0, rooms, visited);

        for(bool el : visited){
            if(!el){
                return false;
            }
        }

        return true;

    }

    void dfs(int node, vector<vector<int>>& rooms, vector<bool>& visited){
        visited[node] = true;

        for(int neigh: rooms[node]){
            if(!visited[neigh]){
                dfs(neigh, rooms, visited);
            }
        }
    }
};