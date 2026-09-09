class Solution {
public:
    void addedge(vector<vector<int>>& graph,int a, int b) {
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bool dfs(vector<vector<int>>& graph,int currentnode,int destination,vector<bool>& visited) {
        if (currentnode == destination) {
            return true;
        }
        visited[currentnode] = true;
        for (int neighbor : graph[currentnode]) {
            if (!visited[neighbor]) {
                if (dfs(graph,neighbor,destination,visited)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n, false);
        for (auto edge : edges) {
            int a = edge[0];
            int b = edge[1];
            addedge(graph,a, b);
        }
        return dfs(graph, source, destination, visited);
        
    }
};