import heapq
class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        c=dict()
        for a in arr:
            if a in c.keys():
                c[a]+=1
            else:
                c[a]=1
        
        n=len(arr)
        y=list(c.values())
        heapq._heapify_max(y)
        x=n
        m=0
        print(y)
        while(x>n/2 and len(y)>0):
            pop=heapq._heappop_max(y)
            x-=pop
            m+=1
        return m