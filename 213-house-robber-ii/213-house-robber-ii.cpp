class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        else if(n==2)
            return max(nums[0],nums[1]);
        vector<int> dp(nums.size(),-1);
        dp[0]=0;
        dp[1]=nums[1];
        for(int i=1;i<=nums.size()-1;i++)
        {
            int take=nums[i];
            if(i>1)
                take+=dp[i-2];
            int not_take=dp[i-1];
            dp[i]=max(take,not_take);
        }
        vector<int> d(nums.size(),-1);
        d[0]=nums[0];
        for(int i=0;i<=nums.size()-2;i++)
        {
            int take=nums[i],not_take=0;
            if(i>1)
                take+=d[i-2];
            if(i>0)
                not_take=d[i-1];
            
            d[i]=max(take,not_take);
        }
        return max(dp[nums.size()-1],d[nums.size()-2]);
    }
};