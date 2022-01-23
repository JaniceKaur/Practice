#include <bits/stdc++.h>
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n,-1);
    dp[0]=0;
    dp[1]=abs(heights[0]-heights[1]);
    if(heights.size()==1)
        return dp[0];
    if(heights.size()==2)
        return dp[1];
    for(int idx=2;idx<n;idx++)
    {
        int first=dp[idx-1]+abs(heights[idx]-heights[idx-1]);
       	int second=dp[idx-2]+abs(heights[idx]-heights[idx-2]);
        dp[idx]=min(first,second);
	}
    return dp[n-1];
}
