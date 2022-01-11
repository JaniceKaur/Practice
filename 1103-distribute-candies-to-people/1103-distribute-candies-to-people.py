class Solution:
    def distributeCandies(self, candies: int, num_people: int) -> List[int]:
        arr=[0]*num_people
        count=1
        while(candies>=0):
            for i in range(num_people):
                if candies>count:
                    arr[i]+=count
                    candies-=count
                else:
                    arr[i]+=candies
                    candies-=count
                    break
                count+=1
    
        return arr