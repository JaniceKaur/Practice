class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int mxL=0;
        int mxR = 0;
        int area=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=mxL)
                    mxL=height[left];
                else
                    area+=mxL-height[left];
               left++; 
            }
            else{
                if(height[right]>=mxR){
                    mxR=height[right];
                }
                else
                    area+=mxR-height[right];
                
                right--;
            }
        }
        return area;
    }
};