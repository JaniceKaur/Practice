def reverse_sublist(lst,start,end):
    lst = lst[:start]+lst[start:end][::-1]+lst[end:]
    return lst
class Solution:
    def printMinNumberForPattern(ob,S):
        arr="123456789"
        S=S+'A'
        start=0
        end=0
        curr=S[0]
        for i in range(1,len(S)):
            if S[i]!=curr:
                end=i
                if curr=='D':
                    arr=reverse_sublist(arr,start,end+1)
                start=end
                curr=S[i]
        return(arr[0:len(S)])
        
#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S=str(input())

        ob = Solution()
        print(ob.printMinNumberForPattern(S))
# } Driver Code Ends