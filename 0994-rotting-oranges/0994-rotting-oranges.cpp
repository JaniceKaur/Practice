class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> ans=grid;
        queue<pair<pair<int,int>,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int vis[m][n];
        int c1=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                    vis[i][j]=0;
                if(grid[i][j]==1)
                    c1++; //maintaining the count of fresh oranges
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int tm=0;
        int cnt=0;
        while(!q.empty()){
            pair<pair<int,int>,int> node=q.front();
            q.pop();
            int r=node.first.first;
            int c=node.first.second;
            int t=node.second;
            tm=max(t,tm);
            for(int i=0;i<4;i++){
                int newrow=r+drow[i];
                int newcol=c+dcol[i];
                if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && grid[newrow][newcol]==1 && vis[newrow][newcol]==0){
                    cnt++;
                    q.push({{newrow,newcol},t+1});
                    vis[newrow][newcol]=1;
                }
            }
        }
        if(cnt!=c1)
            return -1;
        else 
            return tm;
        
    }
};