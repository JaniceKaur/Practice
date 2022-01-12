class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        ch=coordinates[0]
        n= int(coordinates[1])
        if(ch=='a' or ch=='c' or ch=='e' or ch=='g'):
            if(n%2==0):
                return True
            else:
                return False
        else:
            if not(n%2==0):
                return True
            else:
                return False