class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<bool>>& isVisited, int sr, int sc, int color,int target) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) {
            return;
        }
        
        if (isVisited[sr][sc] == true || image[sr][sc] != target) {
            return;
        }
        
        isVisited[sr][sc] = true;
        image[sr][sc] = color;
        dfs(image, isVisited, sr - 1, sc, color,target);
        dfs(image, isVisited, sr + 1, sc, color,target);
        dfs(image, isVisited, sr , sc - 1, color,target);
        dfs(image, isVisited, sr , sc + 1, color,target);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> isVisited(image.size(),vector<bool>(image[0].size(),false));
        int target = image[sr][sc];
        dfs(image, isVisited, sr, sc, color,target);
        return image;
        
    }
};