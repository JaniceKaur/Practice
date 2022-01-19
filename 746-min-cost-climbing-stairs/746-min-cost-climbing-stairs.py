class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp=cost[:]+[0]
        
        for i in range(2,len(cost)+1):
                first=dp[i-2]
                second=dp[i-1]
                dp[i]=(dp[i]+min(first,second))
        return dp[-1]