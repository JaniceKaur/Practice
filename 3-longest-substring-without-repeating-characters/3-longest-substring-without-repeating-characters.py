class Solution:
    def lengthOfLongestSubstring(self, arr: str) -> int:
        start=0
        maximum=0
        c=dict()
        for i in range(0,len(arr)):
            if((arr[i] in c.keys()) and c[arr[i]]>=start):
                start=c[arr[i]]+1
            c[arr[i]]=i
            maximum=max(maximum,i-start+1)
        
        
        return(maximum)