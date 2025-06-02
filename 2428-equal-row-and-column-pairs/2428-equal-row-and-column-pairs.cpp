class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        vector<vector<int>> columnFinal;
        for(int i =0; i<grid.size(); i++){
            vector<int> column;
            for(int j =0; j<grid.size();j++){
                column.push_back(grid[j][i]);
            }
            columnFinal.push_back(column);
        }

        map<vector<int>, int> res;

        for(int i = 0; i<grid.size();i++){
            res[grid[i]]++;
        }

        int counter = 0;
        for (int i = 0; i < grid.size(); i++) {
            counter += res[columnFinal[i]];

            for (int x : columnFinal[i]) cout << x << " ";
            cout << ": " << res[columnFinal[i]] << endl;
        }

        return counter;
    }
};