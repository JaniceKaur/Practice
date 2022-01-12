class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        start=0
        end=0
        product=nums[0]
        n=len(nums)
        count=0
        while(start<n and end<n):
            if(product<k):
                end+=1
                
                if(end>=start):
                    count+= end-start
                if(end<n):
                    product *=nums[end]
            else:
                product/=nums[start]
                start+=1
        return count