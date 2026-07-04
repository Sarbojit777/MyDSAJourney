class Solution {
public:
    bool findPath(int &source,int &destination,vector<bool> &visited,vector<vector<int>> &adj){
        if(source == destination) return true;
        visited[source] = true;
        for(int neighbour : adj[source]){
            if(!visited[neighbour]){
                if(findPath(neighbour,destination,visited,adj))
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //Building A Graph
        vector<vector<int>> adj(n);

        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> visited(n,false);

        return findPath(source,destination,visited,adj);

    }
};