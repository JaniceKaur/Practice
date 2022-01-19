class Solution:
    def subset(self, idx,nums,l1=list()):
        if(idx>=len(nums)):
            if(sorted(l1) not in self.l):
                self.l.append(sorted(l1))
                return 
            else:
                return
        l1.append(nums[idx])
        self.subset(idx+1,nums,copy.deepcopy(l1))
        l1.remove(nums[idx])
        self.subset(idx+1,nums,copy.deepcopy(l1))
    
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        self.l=[]
        idx=0
        self.subset(idx,nums)
        return self.l