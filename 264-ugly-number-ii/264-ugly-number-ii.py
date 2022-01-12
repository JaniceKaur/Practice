class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly=[0]*n
        ugly[0]=1
        i=0
        i2=i3=i5=0
        for i in range(1,n):
            next_2=ugly[i2]*2
            next_3=ugly[i3]*3
            next_5=ugly[i5]*5
		    
            ugly[i]=min(next_2,next_3,next_5)
            
            if(ugly[i]==next_2):
                i2+=1
                print(i2)
		       
            if(ugly[i]==next_3):
                i3+=1
            
            if(ugly[i]==next_5):
                i5+=1
		        
        return ugly[-1]