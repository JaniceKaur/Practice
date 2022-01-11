import heapq
class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        start=0
        end=0
        arr.sort()
        n=len(arr)
        count=0
        c=[]
        curr=arr[start]
        while(start<n and end<n):
            if (arr[end]!=curr):
                c.append(count)
                count=0
                start=end
                curr=arr[start]
            else:
                end+=1
                count+=1
        if(count):
            c.append(count)
            
        heapq._heapify_max(c)
        x=n
        m=0
        while(x>n/2 and len(c)>0):
            pop=heapq._heappop_max(c)
            x-=pop
            m+=1
        return m