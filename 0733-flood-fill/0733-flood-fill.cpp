class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int icol, int i, int j, int color){
        if(i<0 || i>=image.size() || j<0 || j>= image[0].size() || ans[i][j] == color || ans[i][j] != icol)
            return;
        ans[i][j]=color;
        dfs(image,ans,icol,i+1,j,color);
        dfs(image,ans,icol,i-1,j,color);
        dfs(image,ans,icol,i,j+1,color);
        dfs(image,ans,icol,i,j-1,color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int s_color=image[sr][sc];
        dfs(image,ans,s_color,sr,sc,color);
        return ans;
    }
};