class Solution {
public:
    bool dfs(vector<vector<int>>&graph, int node, int c, vector<int>& visited){
        visited[node]=c;
        for(int i=0;i<graph[node].size();i++){
            int neigh=graph[node][i];
            // not visited but have same colour
            if(visited[neigh]==-1 ){
                if(!dfs(graph,neigh,1-c,visited)){
                    return false;
                }
            }
            // have same colour
            if(visited[neigh]==c)return false;
        }
        return true;
    } 
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i]==-1){
                if(!dfs(graph, i, 0,visited))return false;
            }
        }
        return true;
    }
};