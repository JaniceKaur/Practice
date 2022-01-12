class Solution {
public:
    bool isUgly(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        while(n)
        {
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n/=3;
            else if(n%5==0)
                n/=5;
            else
                break;
        }
        return (n==1);
    }
};