class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> rowMap;

        for(int i = 0; i<grid.size();i++){
            rowMap[grid[i]]++;
        }

        int counter = 0;

        for(int i = 0; i<grid.size(); i++){
            vector<int> col;

            for(int j =0;j < grid.size();j++){
                col.push_back(grid[j][i]);
            }

            counter += rowMap[col];
        }

        return counter;
    }
};