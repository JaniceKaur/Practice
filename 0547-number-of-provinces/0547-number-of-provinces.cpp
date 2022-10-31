class Solution {
public:
    void dfs(int node,vector<int> &visited,vector<int> adj[]){
        visited[node]=1;
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it,visited,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adls[isConnected.size()];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(i!=j && isConnected[i][j]==1){
                    adls[i].push_back(j);
                    adls[j].push_back(i);
                }
            }
        }
        
        int count=0;
        vector<int> visited(n,0);
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                count++;
                dfs(i,visited,adls);
            }
        }
        return count;
    }
};