class Solution {
public:
    void bfs(vector<vector<int>>& grid,int x,int y,queue<pair<int, int>>& rotted,bool& isnewRotted,int& oranges) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) {
            return;
        }
        if (grid[x][y] == 0) {
            return;
        }
        if (grid[x][y] == 1) {
            grid[x][y] = 2;
            isnewRotted = true;
            oranges--;
            rotted.push({ x,y });
        }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> rotted;
        int min = 0;
        int oranges = 0;
        bool isnewRotted = false;
        


        for (int i = 0;i < grid.size();i++) {
            for (int j = 0;j < grid[0].size();j++) {
                if (grid[i][j] == 2) {
                    rotted.push({ i,j });
                }
                if (grid[i][j] == 1) {
                    oranges++;
                }
            }
        }
        if (oranges == 0) {
            return 0;
        }
        while (!rotted.empty()) {
            if (oranges <= 0) {
                return min;;
            }
            
            int size = rotted.size();
            
            for (int i = 0; i < size; i++) {
                int row = rotted.front().first;
                int col = rotted.front().second;
                rotted.pop();
                bfs(grid, row - 1, col, rotted,isnewRotted,oranges);
                bfs(grid, row + 1, col, rotted,isnewRotted,oranges);
                bfs(grid, row, col - 1, rotted,isnewRotted,oranges);
                bfs(grid, row, col + 1, rotted,isnewRotted,oranges);

                
            }
            min++;
        }
        return -1;
    }
};