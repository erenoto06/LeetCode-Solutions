class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& isVisited,int node) {
        isVisited[node] = true;
        for (int j = 0;j < isConnected[0].size();j++) {
            if (isConnected[node][j] == 1 && isVisited[j] == false) {
                dfs(isConnected, isVisited, j);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int province = 0;
        vector<bool> isVisited(isConnected.size(),false);
        for (int i = 0;i < isConnected.size();i++) {
            if (isVisited[i] == false) {
                dfs(isConnected, isVisited,i);
                province++;
            }
        }
        return province;

        
    }
};