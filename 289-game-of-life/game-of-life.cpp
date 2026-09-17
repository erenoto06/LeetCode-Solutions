class Solution {
public:
    int dfs(vector<vector<int>>& tempboard, int row, int col) {
        if (row < 0 || col < 0 || row >= tempboard.size() || col >= tempboard[0].size()) {
            return 0;
        }
        if (tempboard[row][col] == 0) {
            return 0;
        }
        return 1;
    }

    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> tempboard = board;
        for (int i = 0;i < board.size();i++) {
            for (int j = 0;j < board[0].size();j++) {
                int sum =
                dfs(tempboard, i-1, j-1) +
                dfs(tempboard, i-1, j) +
                dfs(tempboard, i-1, j+1) +
                dfs(tempboard, i, j-1) +
                dfs(tempboard, i, j+1) +
                dfs(tempboard, i+1, j-1) +
                dfs(tempboard, i+1, j) +
                dfs(tempboard, i+1, j+1);
                if (tempboard[i][j] == 1) {
                    if (sum <= 1 || sum >= 4) {
                        board[i][j] = 0;
                    }
                }
                else {
                    if (sum == 3) {
                        board[i][j] = 1;
                    }
                }
            }
        }
        
    }
};