#User function Template for python3

class Solution:
    def isDigitSumPalindrome(self,n):
        sum=0
        for i in str(n):
           sum+=int(i)
        n=str(sum)
        n=n[::-1]
        if sum==int(n):
           return '1'
        else:
           return '0'

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.isDigitSumPalindrome(N))
# } Driver Code Ends