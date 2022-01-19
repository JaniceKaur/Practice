class Solution:
    def fib(self, n: int) -> int:
        dp=[]
        for i in range(0,n+1):
            if (i == 0):
                dp.append(0)
            elif (i==1):
                dp.append(1)
            else:
                dp.append(dp[i-1]+dp[i-2])
        return dp[n]