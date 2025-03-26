class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rem;
        vector<int> newGrid;

        for(int i = 0; i < n; i++){
            for(int j = 0; j<m; j++){
                rem.push_back(grid[i][j] % x);
                newGrid.push_back(grid[i][j]);
            }
        }

        

        for(int i = 1; i < m*n; i++){
            if(rem[i] != rem[i-1]){
                return -1;
            }
        }

        sort(newGrid.begin(), newGrid.end());
        int median = newGrid[newGrid.size() / 2];

        int operations = 0;
        for (int val : newGrid) {
            operations += abs(val - median) / x;
        }

        return operations;
    }
};