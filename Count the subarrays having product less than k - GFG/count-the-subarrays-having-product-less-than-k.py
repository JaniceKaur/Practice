#User function Template for python3

class Solution:
    def countSubArrayProductLessThanK(self, a, n, k):
        start=0
        end=0
        product=a[0]
        count=0
        while(start<n and end<n):
            if(product<k):
                end+=1
                
                if(end>=start):
                    count+= end-start
                if(end<n):
                    product *=a[end]
            else:
                product/=a[start]
                start+=1
        return count
    
    
    
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n, k = [int(x) for x in input().strip().split()]
        arr = [int(x) for x in input().strip().split()]
        
        print(Solution().countSubArrayProductLessThanK(arr, n, k))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends