class Solution:
    def numDecodings(self, s: str) -> int:
        n=len(s)
        decoder=[0 for x in range(n)]
        if(s[0]!='0'):
            decoder[0]=1
            
        for i in range(1,n):
            a=int(s[i])
            b=int(s[i-1:i+1])
            if a>=1 and a<=9:
                decoder[i]+=decoder[i-1]
            if b>=10 and b<=26:
                if (i-2)>=0:
                    decoder[i]+=decoder[i-2]
                else:
                    decoder[i]+=1
        
        return decoder[-1]