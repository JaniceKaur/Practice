class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        start=0
        if len(p) > len(s):
            return []
        dict1=dict()
        for x in p:
            if x in dict1.keys():
                dict1[x]+=1
            else:
                dict1[x]=1
        l=[]
        dict2=dict()
        for idx in range(len(p)):
            if s[idx] in dict2:
                dict2[s[idx]] += 1
            else:
                dict2[s[idx]] = 1
        
        if dict1 == dict2:
            l.append(0)
        
        for j in range(len(p),len(s)):
            if(s[j] in dict2.keys()):
                dict2[s[j]]+=1
            else:
                dict2[s[j]]=1
            
            
            start=j-len(p)
            if(dict2[s[start]]>1):
                dict2[s[start]]-=1
            else:
                dict2.pop(s[start])
                
            if(dict2==dict1):
                l.append(j-len(p)+1)
            
        return l