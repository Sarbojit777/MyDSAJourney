class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> visited(n,0);
        queue<int> q;
        q.push(source);
        visited[source]=1;

        while(!q.empty()){
            int currNode = q.front();
            q.pop();
            if(currNode == destination) return true;
            for(auto it: adj[currNode]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
        return false;

    }
};