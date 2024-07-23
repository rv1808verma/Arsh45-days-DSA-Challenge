// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

bool cycleDetect(int node, int parent, vector<int> adj[], vector<bool> &visited){

    visited[node] = 1;
    for (int j = 0; j < adj[node].size(); j++){
        if (parent == adj[node][j]) continue;
        if (visited[adj[node][j]]) return 1;
        if (cycleDetect(adj[node][j], node, adj, visited)) return 1;
    }
    return 0;
}
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, 0);
        for (int i = 0; i < V; i++){
            if (!visited[i] && cycleDetect(i, -1, adj, visited)) return 1;
        }
        return 0;
    }
