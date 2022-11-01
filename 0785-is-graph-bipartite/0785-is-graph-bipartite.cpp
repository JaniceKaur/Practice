class Solution {
public:
    bool bfs(int i,vector<int> &color,vector<vector<int>>& graph){
        color[i]=0;
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(auto it:graph[cur]){
                if(color[it]==-1){
                    color[it]=!color[cur];
                    q.push(it);
                }
                else if(color[it]==color[cur])
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                if(!bfs(i,color,graph)) 
                    return false;
            }
        }
        return true;
    }
};