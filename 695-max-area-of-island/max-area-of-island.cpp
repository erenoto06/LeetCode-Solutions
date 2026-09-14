class Solution {
public:
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& isVisited,int row,int col) {
        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size()) {
            return 0;
        }
        if (isVisited[row][col] == true || grid[row][col] == 0) {
            return 0;
        }
        isVisited[row][col] = true;
        return 1 +
        dfs(grid, isVisited, row - 1, col) +
        dfs(grid, isVisited, row + 1, col) +
        dfs(grid, isVisited, row , col + 1) +
        dfs(grid, isVisited, row , col - 1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        int islandArea = 0;
        vector<vector<bool>> isVisited(grid.size(), vector<bool>(grid[0].size(), false));
        for (int i = 0;i < grid.size();i++) {
            for (int j = 0;j < grid[0].size();j++) {
                if (grid[i][j] == 1 && isVisited[i][j] == false) {
                    islandArea = dfs(grid, isVisited, i, j);
                    maxArea = max(maxArea, islandArea);
                    
                }
            }
        }
        return maxArea;
        
    }
};