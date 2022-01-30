class Solution {
public:
    int rec(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if(i==triangle.size()-1)
            return triangle[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int d=triangle[i][j]+rec(i+1,j,triangle,dp);
        int dg=triangle[i][j]+rec(i+1,j+1,triangle,dp);
        return dp[i][j]=min(d,dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size()-1;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        int i=0,j=0;
        return rec(0,0,triangle,dp);
    }
};