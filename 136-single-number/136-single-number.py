class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict1={}
        for x in nums:
            if x in dict1:
                dict1[x]+=1
            else:
                dict1[x]=1
        for key, value in dict1.items():
            if value == 1:
                return key