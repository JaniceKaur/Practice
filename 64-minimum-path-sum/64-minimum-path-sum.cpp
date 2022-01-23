class Solution {
public:
    int minPathSum(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int grid[m][n];
        memset(grid, -1, sizeof(grid));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    grid[0][0]=obstacleGrid[i][j];
                else
                {
                    int up=INT_MAX,left=INT_MAX;
                    if(i>0)
                        up=grid[i-1][j]+obstacleGrid[i][j];
                    if(j>0)
                        left=grid[i][j-1]+obstacleGrid[i][j];
                    grid[i][j]=min(up,left);
                }
                
            }
        return grid[m-1][n-1];
    }
};