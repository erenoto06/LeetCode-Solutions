class Solution {
public:
    bool dfs(vector<vector<int>>& matrix, int target, int row, int col) {
        if (row >= matrix.size() || col < 0) {
            return false;
        }

        if (matrix[row][col] == target) {
            return true;
        }

        if (matrix[row][col] > target) {
            return dfs(matrix, target, row, col - 1);
        }

        return dfs(matrix, target, row + 1, col);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size() - 1;

        return dfs(matrix, target, row, col);
    }
};