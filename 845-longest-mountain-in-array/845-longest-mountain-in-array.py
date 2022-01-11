class Solution:
    def longestMountain(self, arr: List[int]) -> int:
        if len(arr)<3:
            return 0
        start=0
        end=0
        flag=0
        dec=0
        count=0
        x=[]
        for i in range(1,len(arr)):
            if (arr[i]>arr[i-1]) and flag==0:
                start=i-1
                flag=1
            
            if (arr[i]==arr[i-1]) and flag!=0 and dec==0:
                end=i
                start=end+1
                flag=1
                dec=0
            
            if (arr[i]<arr[i-1]) and flag!=0 and dec==0:
                dec=1
            
            if (arr[i]==arr[i-1]) and flag!=0 and dec!=0:
                end=i
                if(count<end-start and end-start>=3):
                    count=end-start
                start=end
                flag=1
                dec=0
                
            if (arr[i]>arr[i-1]) and flag!=0 and dec!=0:
                end=i
                if(count<end-start and end-start>=3):
                    count=end-start
                start=end-1
                flag=1
                dec=0
            
            if(i==len(arr)-1 and flag!=0 and dec!=0 ):
                end=i+1
                if(count<end-start and end-start>=3):
                    count=end-start
        
       
        return count